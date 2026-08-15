#pragma once
// IWYU pragma private; include "HorizonBasedAmbientOcclusion/Universal/HBAORendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HBAORendererFeature)
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAORenderPass_HBAORendererFeature_HistoryBufferType;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_MersenneTwister;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_PassData;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_Pass;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_ShaderProperties;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature___c;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORendererFeature_HBAORenderPass;
}
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
struct HBAO_Quality;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_VarianceClipping;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class BufferedRTHandleSystem;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
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
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAORenderPass_HBAORendererFeature_HistoryBufferType;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_MersenneTwister;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_Pass;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_PassData;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature_ShaderProperties;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORenderPass_HBAORendererFeature___c;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORendererFeature;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAORendererFeature_HBAORenderPass;
}
// Write type traits
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_Pass*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*);
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/HistoryBufferType");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/CameraHistoryBuffers");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/MersenneTwister");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_Pass*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/Pass");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/PassData");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/ShaderProperties");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass/<>c");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*, "HorizonBasedAmbientOcclusion.Universal", "HBAORendererFeature/HBAORenderPass");
// Dependencies System.Object, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RenderTargetIdentifier
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/PassData
class CORDL_TYPE HBAORenderPass_HBAORendererFeature_PassData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AOTexture, put=set_AOTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  AOTexture;

 __declspec(property(get=get_AOTextureDescriptor, put=set_AOTextureDescriptor)) ::UnityEngine::RenderTextureDescriptor  AOTextureDescriptor;

 __declspec(property(get=get_CameraDepthTexture, put=set_CameraDepthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  CameraDepthTexture;

 __declspec(property(get=get_DestinationTexture, put=set_DestinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  DestinationTexture;

 __declspec(property(get=get_DirectLightingStrength, put=set_DirectLightingStrength)) float_t  DirectLightingStrength;

 __declspec(property(get=get_FullscreenTriangle, put=set_FullscreenTriangle)) ::UnityW<::UnityEngine::Mesh>  FullscreenTriangle;

 __declspec(property(get=get_HistoryBuffers, put=set_HistoryBuffers)) ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  HistoryBuffers;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_MaterialProperties, put=set_MaterialProperties)) ::UnityEngine::MaterialPropertyBlock*  MaterialProperties;

 __declspec(property(get=get_RenderingInSceneView, put=set_RenderingInSceneView)) bool  RenderingInSceneView;

 __declspec(property(get=get_ShowDebug, put=set_ShowDebug)) bool  ShowDebug;

 __declspec(property(get=get_ShowViewNormals, put=set_ShowViewNormals)) bool  ShowViewNormals;

 __declspec(property(get=get_SourceTexture, put=set_SourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  SourceTexture;

 __declspec(property(get=get_TargetDescriptor, put=set_TargetDescriptor)) ::UnityEngine::RenderTextureDescriptor  TargetDescriptor;

 __declspec(property(get=get_TempTexture, put=set_TempTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  TempTexture;

 __declspec(property(get=get_TemporalFilterRenderTargets, put=set_TemporalFilterRenderTargets)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  TemporalFilterRenderTargets;

 __declspec(property(get=get_UseBlur, put=set_UseBlur)) bool  UseBlur;

 __declspec(property(get=get_UseColorBleeding, put=set_UseColorBleeding)) bool  UseColorBleeding;

 __declspec(property(get=get_UseLitAO, put=set_UseLitAO)) bool  UseLitAO;

 __declspec(property(get=get_UseTemporalFilter, put=set_UseTemporalFilter)) bool  UseTemporalFilter;

/// @brief Field <AOTextureDescriptor>k__BackingField, offset 0x4c, size 0x34 
 __declspec(property(get=__cordl_internal_get__AOTextureDescriptor_k__BackingField, put=__cordl_internal_set__AOTextureDescriptor_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _AOTextureDescriptor_k__BackingField;

/// @brief Field <AOTexture>k__BackingField, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__AOTexture_k__BackingField, put=__cordl_internal_set__AOTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _AOTexture_k__BackingField;

/// @brief Field <CameraDepthTexture>k__BackingField, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get__CameraDepthTexture_k__BackingField, put=__cordl_internal_set__CameraDepthTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _CameraDepthTexture_k__BackingField;

/// @brief Field <DestinationTexture>k__BackingField, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get__DestinationTexture_k__BackingField, put=__cordl_internal_set__DestinationTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _DestinationTexture_k__BackingField;

/// @brief Field <DirectLightingStrength>k__BackingField, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__DirectLightingStrength_k__BackingField, put=__cordl_internal_set__DirectLightingStrength_k__BackingField)) float_t  _DirectLightingStrength_k__BackingField;

/// @brief Field <FullscreenTriangle>k__BackingField, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__FullscreenTriangle_k__BackingField, put=__cordl_internal_set__FullscreenTriangle_k__BackingField)) ::UnityW<::UnityEngine::Mesh>  _FullscreenTriangle_k__BackingField;

/// @brief Field <HistoryBuffers>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__HistoryBuffers_k__BackingField, put=__cordl_internal_set__HistoryBuffers_k__BackingField)) ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  _HistoryBuffers_k__BackingField;

/// @brief Field <MaterialProperties>k__BackingField, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaterialProperties_k__BackingField, put=__cordl_internal_set__MaterialProperties_k__BackingField)) ::UnityEngine::MaterialPropertyBlock*  _MaterialProperties_k__BackingField;

/// @brief Field <Material>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material_k__BackingField, put=__cordl_internal_set__Material_k__BackingField)) ::UnityW<::UnityEngine::Material>  _Material_k__BackingField;

/// @brief Field <RenderingInSceneView>k__BackingField, offset 0xfa, size 0x1 
 __declspec(property(get=__cordl_internal_get__RenderingInSceneView_k__BackingField, put=__cordl_internal_set__RenderingInSceneView_k__BackingField)) bool  _RenderingInSceneView_k__BackingField;

/// @brief Field <ShowDebug>k__BackingField, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowDebug_k__BackingField, put=__cordl_internal_set__ShowDebug_k__BackingField)) bool  _ShowDebug_k__BackingField;

/// @brief Field <ShowViewNormals>k__BackingField, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowViewNormals_k__BackingField, put=__cordl_internal_set__ShowViewNormals_k__BackingField)) bool  _ShowViewNormals_k__BackingField;

/// @brief Field <SourceTexture>k__BackingField, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get__SourceTexture_k__BackingField, put=__cordl_internal_set__SourceTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _SourceTexture_k__BackingField;

/// @brief Field <TargetDescriptor>k__BackingField, offset 0x18, size 0x34 
 __declspec(property(get=__cordl_internal_get__TargetDescriptor_k__BackingField, put=__cordl_internal_set__TargetDescriptor_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _TargetDescriptor_k__BackingField;

/// @brief Field <TempTexture>k__BackingField, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__TempTexture_k__BackingField, put=__cordl_internal_set__TempTexture_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _TempTexture_k__BackingField;

/// @brief Field <TemporalFilterRenderTargets>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TemporalFilterRenderTargets_k__BackingField, put=__cordl_internal_set__TemporalFilterRenderTargets_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  _TemporalFilterRenderTargets_k__BackingField;

/// @brief Field <UseBlur>k__BackingField, offset 0xf2, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseBlur_k__BackingField, put=__cordl_internal_set__UseBlur_k__BackingField)) bool  _UseBlur_k__BackingField;

/// @brief Field <UseColorBleeding>k__BackingField, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseColorBleeding_k__BackingField, put=__cordl_internal_set__UseColorBleeding_k__BackingField)) bool  _UseColorBleeding_k__BackingField;

/// @brief Field <UseLitAO>k__BackingField, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseLitAO_k__BackingField, put=__cordl_internal_set__UseLitAO_k__BackingField)) bool  _UseLitAO_k__BackingField;

/// @brief Field <UseTemporalFilter>k__BackingField, offset 0xf3, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseTemporalFilter_k__BackingField, put=__cordl_internal_set__UseTemporalFilter_k__BackingField)) bool  _UseTemporalFilter_k__BackingField;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData* New_ctor() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__AOTextureDescriptor_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__AOTextureDescriptor_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__AOTexture_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__AOTexture_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__CameraDepthTexture_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__CameraDepthTexture_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__DestinationTexture_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__DestinationTexture_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DirectLightingStrength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DirectLightingStrength_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__FullscreenTriangle_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__FullscreenTriangle_k__BackingField() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* const& __cordl_internal_get__HistoryBuffers_k__BackingField() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*& __cordl_internal_get__HistoryBuffers_k__BackingField() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__MaterialProperties_k__BackingField() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__MaterialProperties_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RenderingInSceneView_k__BackingField() const;

constexpr bool& __cordl_internal_get__RenderingInSceneView_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowDebug_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowDebug_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowViewNormals_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowViewNormals_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__SourceTexture_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__SourceTexture_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__TargetDescriptor_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__TargetDescriptor_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__TempTexture_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__TempTexture_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get__TemporalFilterRenderTargets_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get__TemporalFilterRenderTargets_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseBlur_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseBlur_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseColorBleeding_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseColorBleeding_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseLitAO_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseLitAO_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseTemporalFilter_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseTemporalFilter_k__BackingField() ;

constexpr void __cordl_internal_set__AOTextureDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__AOTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set__CameraDepthTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set__DestinationTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set__DirectLightingStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__FullscreenTriangle_k__BackingField(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__HistoryBuffers_k__BackingField(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  value) ;

constexpr void __cordl_internal_set__MaterialProperties_k__BackingField(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__Material_k__BackingField(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__RenderingInSceneView_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowDebug_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ShowViewNormals_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SourceTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set__TargetDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__TempTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set__TemporalFilterRenderTargets_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set__UseBlur_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UseColorBleeding_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UseLitAO_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UseTemporalFilter_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AOTexture, addr 0x1804f6820, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_AOTexture() ;

/// @brief Method get_AOTextureDescriptor, addr 0x1813fda70, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_AOTextureDescriptor() ;

/// @brief Method get_CameraDepthTexture, addr 0x1813fdaa0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_CameraDepthTexture() ;

/// @brief Method get_DestinationTexture, addr 0x1803717d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_DestinationTexture() ;

/// @brief Method get_DirectLightingStrength, addr 0x1813fdab0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DirectLightingStrength() ;

/// @brief Method get_FullscreenTriangle, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_FullscreenTriangle() ;

/// @brief Method get_HistoryBuffers, addr 0x1803b2f10, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* get_HistoryBuffers() ;

/// @brief Method get_Material, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_MaterialProperties, addr 0x180474bf0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_MaterialProperties() ;

/// @brief Method get_RenderingInSceneView, addr 0x1813fdac0, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderingInSceneView() ;

/// @brief Method get_ShowDebug, addr 0x1813efe70, size 0x10, virtual false, abstract: false, final false
inline bool get_ShowDebug() ;

/// @brief Method get_ShowViewNormals, addr 0x1813fdad0, size 0x10, virtual false, abstract: false, final false
inline bool get_ShowViewNormals() ;

/// @brief Method get_SourceTexture, addr 0x180eb4ac0, size 0x2d20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_SourceTexture() ;

/// @brief Method get_TargetDescriptor, addr 0x1813fdae0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_TargetDescriptor() ;

/// @brief Method get_TempTexture, addr 0x1813fdb10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_TempTexture() ;

/// @brief Method get_TemporalFilterRenderTargets, addr 0x1803b2dc0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> get_TemporalFilterRenderTargets() ;

/// @brief Method get_UseBlur, addr 0x1813fdb20, size 0x10, virtual false, abstract: false, final false
inline bool get_UseBlur() ;

/// @brief Method get_UseColorBleeding, addr 0x1813fdb30, size 0x10, virtual false, abstract: false, final false
inline bool get_UseColorBleeding() ;

/// @brief Method get_UseLitAO, addr 0x1813fdb40, size 0x10, virtual false, abstract: false, final false
inline bool get_UseLitAO() ;

/// @brief Method get_UseTemporalFilter, addr 0x1813fdb50, size 0x10, virtual false, abstract: false, final false
inline bool get_UseTemporalFilter() ;

/// @brief Method set_AOTexture, addr 0x1804f6870, size 0x10, virtual false, abstract: false, final false
inline void set_AOTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method set_AOTextureDescriptor, addr 0x1813fdb60, size 0x20, virtual false, abstract: false, final false
inline void set_AOTextureDescriptor(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_CameraDepthTexture, addr 0x1813fdb80, size 0x10, virtual false, abstract: false, final false
inline void set_CameraDepthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method set_DestinationTexture, addr 0x1813fdb90, size 0x10, virtual false, abstract: false, final false
inline void set_DestinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method set_DirectLightingStrength, addr 0x1813fdba0, size 0x10, virtual false, abstract: false, final false
inline void set_DirectLightingStrength(float_t  value) ;

/// @brief Method set_FullscreenTriangle, addr 0x180352c10, size 0x20, virtual false, abstract: false, final false
inline void set_FullscreenTriangle(::UnityEngine::Mesh*  value) ;

/// @brief Method set_HistoryBuffers, addr 0x1813fdbb0, size 0x20, virtual false, abstract: false, final false
inline void set_HistoryBuffers(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  value) ;

/// @brief Method set_Material, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_MaterialProperties, addr 0x180474ca0, size 0x20, virtual false, abstract: false, final false
inline void set_MaterialProperties(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method set_RenderingInSceneView, addr 0x1813fdbd0, size 0x10, virtual false, abstract: false, final false
inline void set_RenderingInSceneView(bool  value) ;

/// @brief Method set_ShowDebug, addr 0x1813f0030, size 0x10, virtual false, abstract: false, final false
inline void set_ShowDebug(bool  value) ;

/// @brief Method set_ShowViewNormals, addr 0x1813fdbe0, size 0x10, virtual false, abstract: false, final false
inline void set_ShowViewNormals(bool  value) ;

/// @brief Method set_SourceTexture, addr 0x1813fdbf0, size 0x10, virtual false, abstract: false, final false
inline void set_SourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method set_TargetDescriptor, addr 0x1813fdc00, size 0x20, virtual false, abstract: false, final false
inline void set_TargetDescriptor(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_TempTexture, addr 0x1813fdc20, size 0x10, virtual false, abstract: false, final false
inline void set_TempTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method set_TemporalFilterRenderTargets, addr 0x1813fdc30, size 0x20, virtual false, abstract: false, final false
inline void set_TemporalFilterRenderTargets(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

/// @brief Method set_UseBlur, addr 0x1813fdc50, size 0x10, virtual false, abstract: false, final false
inline void set_UseBlur(bool  value) ;

/// @brief Method set_UseColorBleeding, addr 0x1813fdc60, size 0x10, virtual false, abstract: false, final false
inline void set_UseColorBleeding(bool  value) ;

/// @brief Method set_UseLitAO, addr 0x1813fdc70, size 0x10, virtual false, abstract: false, final false
inline void set_UseLitAO(bool  value) ;

/// @brief Method set_UseTemporalFilter, addr 0x1813fdc80, size 0x10, virtual false, abstract: false, final false
inline void set_UseTemporalFilter(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORenderPass_HBAORendererFeature_PassData(HBAORenderPass_HBAORendererFeature_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORenderPass_HBAORendererFeature_PassData(HBAORenderPass_HBAORendererFeature_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20251};

/// @brief Field <Material>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material_k__BackingField;

/// @brief Field <TargetDescriptor>k__BackingField, offset: 0x18, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____TargetDescriptor_k__BackingField;

/// @brief Field <AOTextureDescriptor>k__BackingField, offset: 0x4c, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____AOTextureDescriptor_k__BackingField;

/// @brief Field <CameraDepthTexture>k__BackingField, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____CameraDepthTexture_k__BackingField;

/// @brief Field <SourceTexture>k__BackingField, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____SourceTexture_k__BackingField;

/// @brief Field <AOTexture>k__BackingField, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____AOTexture_k__BackingField;

/// @brief Field <TempTexture>k__BackingField, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____TempTexture_k__BackingField;

/// @brief Field <DestinationTexture>k__BackingField, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____DestinationTexture_k__BackingField;

/// @brief Field <HistoryBuffers>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  ____HistoryBuffers_k__BackingField;

/// @brief Field <TemporalFilterRenderTargets>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ____TemporalFilterRenderTargets_k__BackingField;

/// @brief Field <FullscreenTriangle>k__BackingField, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____FullscreenTriangle_k__BackingField;

/// @brief Field <MaterialProperties>k__BackingField, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____MaterialProperties_k__BackingField;

/// @brief Field <UseLitAO>k__BackingField, offset: 0xf0, size: 0x1, def value: None
 bool  ____UseLitAO_k__BackingField;

/// @brief Field <UseColorBleeding>k__BackingField, offset: 0xf1, size: 0x1, def value: None
 bool  ____UseColorBleeding_k__BackingField;

/// @brief Field <UseBlur>k__BackingField, offset: 0xf2, size: 0x1, def value: None
 bool  ____UseBlur_k__BackingField;

/// @brief Field <UseTemporalFilter>k__BackingField, offset: 0xf3, size: 0x1, def value: None
 bool  ____UseTemporalFilter_k__BackingField;

/// @brief Field <DirectLightingStrength>k__BackingField, offset: 0xf4, size: 0x4, def value: None
 float_t  ____DirectLightingStrength_k__BackingField;

/// @brief Field <ShowDebug>k__BackingField, offset: 0xf8, size: 0x1, def value: None
 bool  ____ShowDebug_k__BackingField;

/// @brief Field <ShowViewNormals>k__BackingField, offset: 0xf9, size: 0x1, def value: None
 bool  ____ShowViewNormals_k__BackingField;

/// @brief Field <RenderingInSceneView>k__BackingField, offset: 0xfa, size: 0x1, def value: None
 bool  ____RenderingInSceneView_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____Material_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____TargetDescriptor_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____AOTextureDescriptor_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____CameraDepthTexture_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____SourceTexture_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____AOTexture_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____TempTexture_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____DestinationTexture_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____HistoryBuffers_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____TemporalFilterRenderTargets_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____FullscreenTriangle_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____MaterialProperties_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____UseLitAO_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____UseColorBleeding_k__BackingField) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____UseBlur_k__BackingField) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____UseTemporalFilter_k__BackingField) == 0xf3, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____DirectLightingStrength_k__BackingField) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____ShowDebug_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____ShowViewNormals_k__BackingField) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData, ____RenderingInSceneView_k__BackingField) == 0xfa, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData) == 0x100, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/Pass
class CORDL_TYPE HBAORenderPass_HBAORendererFeature_Pass : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature_Pass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_Pass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORenderPass_HBAORendererFeature_Pass(HBAORenderPass_HBAORendererFeature_Pass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_Pass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORenderPass_HBAORendererFeature_Pass(HBAORenderPass_HBAORendererFeature_Pass const& ) = delete;

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

/// @brief Field Copy offset 0xffffffff size 0x4
static constexpr int32_t  Copy{static_cast<int32_t>(0x8)};

/// @brief Field Debug_ViewNormals offset 0xffffffff size 0x4
static constexpr int32_t  Debug_ViewNormals{static_cast<int32_t>(0xa)};

/// @brief Field Deinterleave_Depth offset 0xffffffff size 0x4
static constexpr int32_t  Deinterleave_Depth{static_cast<int32_t>(0x2)};

/// @brief Field Deinterleave_Normals offset 0xffffffff size 0x4
static constexpr int32_t  Deinterleave_Normals{static_cast<int32_t>(0x3)};

/// @brief Field Reinterleave_AO offset 0xffffffff size 0x4
static constexpr int32_t  Reinterleave_AO{static_cast<int32_t>(0x5)};

/// @brief Field Temporal_Filter offset 0xffffffff size 0x4
static constexpr int32_t  Temporal_Filter{static_cast<int32_t>(0x7)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_Pass) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Object, UnityEngine.Rendering.GlobalKeyword
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/ShaderProperties
class CORDL_TYPE HBAORenderPass_HBAORendererFeature_ShaderProperties : public ::System::Object {
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

/// @brief Field cameraDepthTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cameraDepthTexture, put=setStaticF_cameraDepthTexture)) int32_t  cameraDepthTexture;

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

/// @brief Field historyBufferRTHandleScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_historyBufferRTHandleScale, put=setStaticF_historyBufferRTHandleScale)) int32_t  historyBufferRTHandleScale;

/// @brief Field inputTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_inputTex, put=setStaticF_inputTex)) int32_t  inputTex;

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

/// @brief Field screenSpaceOcclusionKeyword, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_screenSpaceOcclusionKeyword, put=setStaticF_screenSpaceOcclusionKeyword)) ::UnityEngine::Rendering::GlobalKeyword  screenSpaceOcclusionKeyword;

/// @brief Field screenSpaceOcclusionParam, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_screenSpaceOcclusionParam, put=setStaticF_screenSpaceOcclusionParam)) int32_t  screenSpaceOcclusionParam;

/// @brief Field screenSpaceOcclusionTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_screenSpaceOcclusionTexture, put=setStaticF_screenSpaceOcclusionTexture)) int32_t  screenSpaceOcclusionTexture;

/// @brief Field ssaoTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ssaoTex, put=setStaticF_ssaoTex)) int32_t  ssaoTex;

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
static inline ::StringW GetBlurRadiusKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  blurType) ;

/// @brief Method GetColorBleedingKeyword, addr 0x1813fdc90, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetColorBleedingKeyword(bool  colorBleedingEnabled, bool  litAoModeEnabled) ;

/// @brief Method GetDebugKeyword, addr 0x1813fdcb0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetDebugKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  debugMode) ;

/// @brief Method GetDeinterleavingKeyword, addr 0x1813fdd20, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetDeinterleavingKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  deinterleaving) ;

/// @brief Method GetModeKeyword, addr 0x1813fdd40, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetModeKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  mode) ;

/// @brief Method GetMultibounceKeyword, addr 0x1813fdd60, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetMultibounceKeyword(bool  useMultiBounce, bool  litAoModeEnabled) ;

/// @brief Method GetNoiseKeyword, addr 0x1813fdd80, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetNoiseKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  noiseType) ;

/// @brief Method GetOffscreenSamplesContributionKeyword, addr 0x1813fdda0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetOffscreenSamplesContributionKeyword(float_t  offscreenSamplesContribution) ;

/// @brief Method GetOrthographicProjectionKeyword, addr 0x1813fddc0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetOrthographicProjectionKeyword(bool  orthographic) ;

/// @brief Method GetPerPixelNormalsKeyword, addr 0x1813fdde0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetPerPixelNormalsKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  perPixelNormals) ;

/// @brief Method GetQualityKeyword, addr 0x1813fde10, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetQualityKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  quality) ;

/// @brief Method GetVarianceClippingKeyword, addr 0x1813fde50, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetVarianceClippingKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  varianceClipping) ;

static inline int32_t getStaticF_albedoMultiplier() ;

static inline int32_t getStaticF_angleBias() ;

static inline int32_t getStaticF_aoMultiplier() ;

static inline ::ArrayW<int32_t> getStaticF_aoSliceTex() ;

static inline int32_t getStaticF_aoTexelSize() ;

static inline int32_t getStaticF_atlasOffset() ;

static inline int32_t getStaticF_baseColor() ;

static inline int32_t getStaticF_blurDeltaUV() ;

static inline int32_t getStaticF_blurSharpness() ;

static inline int32_t getStaticF_cameraDepthTexture() ;

static inline int32_t getStaticF_colorBleedBrightnessMask() ;

static inline int32_t getStaticF_colorBleedBrightnessMaskRange() ;

static inline int32_t getStaticF_colorBleedSaturation() ;

static inline ::ArrayW<int32_t> getStaticF_deinterleaveOffset() ;

static inline int32_t getStaticF_deinterleavedAOTexelSize() ;

static inline ::ArrayW<int32_t> getStaticF_depthSliceTex() ;

static inline int32_t getStaticF_depthTex() ;

static inline int32_t getStaticF_distanceFalloff() ;

static inline int32_t getStaticF_hbaoTex() ;

static inline int32_t getStaticF_historyBufferRTHandleScale() ;

static inline int32_t getStaticF_inputTex() ;

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

static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_screenSpaceOcclusionKeyword() ;

static inline int32_t getStaticF_screenSpaceOcclusionParam() ;

static inline int32_t getStaticF_screenSpaceOcclusionTexture() ;

static inline int32_t getStaticF_ssaoTex() ;

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

static inline void setStaticF_cameraDepthTexture(int32_t  value) ;

static inline void setStaticF_colorBleedBrightnessMask(int32_t  value) ;

static inline void setStaticF_colorBleedBrightnessMaskRange(int32_t  value) ;

static inline void setStaticF_colorBleedSaturation(int32_t  value) ;

static inline void setStaticF_deinterleaveOffset(::ArrayW<int32_t>  value) ;

static inline void setStaticF_deinterleavedAOTexelSize(int32_t  value) ;

static inline void setStaticF_depthSliceTex(::ArrayW<int32_t>  value) ;

static inline void setStaticF_depthTex(int32_t  value) ;

static inline void setStaticF_distanceFalloff(int32_t  value) ;

static inline void setStaticF_hbaoTex(int32_t  value) ;

static inline void setStaticF_historyBufferRTHandleScale(int32_t  value) ;

static inline void setStaticF_inputTex(int32_t  value) ;

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

static inline void setStaticF_screenSpaceOcclusionKeyword(::UnityEngine::Rendering::GlobalKeyword  value) ;

static inline void setStaticF_screenSpaceOcclusionParam(int32_t  value) ;

static inline void setStaticF_screenSpaceOcclusionTexture(int32_t  value) ;

static inline void setStaticF_ssaoTex(int32_t  value) ;

static inline void setStaticF_targetScale(int32_t  value) ;

static inline void setStaticF_tempTex(int32_t  value) ;

static inline void setStaticF_tempTex2(int32_t  value) ;

static inline void setStaticF_temporalParams(int32_t  value) ;

static inline void setStaticF_uvToView(int32_t  value) ;

static inline void setStaticF_uvTransform(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature_ShaderProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_ShaderProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORenderPass_HBAORendererFeature_ShaderProperties(HBAORenderPass_HBAORendererFeature_ShaderProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_ShaderProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORenderPass_HBAORendererFeature_ShaderProperties(HBAORenderPass_HBAORendererFeature_ShaderProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/MersenneTwister
class CORDL_TYPE HBAORenderPass_HBAORendererFeature_MersenneTwister : public ::System::Object {
public:
// Declarations
/// @brief Field Numbers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Numbers, put=setStaticF_Numbers)) ::ArrayW<float_t>  Numbers;

static inline ::ArrayW<float_t> getStaticF_Numbers() ;

static inline void setStaticF_Numbers(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature_MersenneTwister() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_MersenneTwister", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORenderPass_HBAORendererFeature_MersenneTwister(HBAORenderPass_HBAORendererFeature_MersenneTwister && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_MersenneTwister", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORenderPass_HBAORendererFeature_MersenneTwister(HBAORenderPass_HBAORendererFeature_MersenneTwister const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20254};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/CameraHistoryBuffers
class CORDL_TYPE HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers : public ::System::Object {
public:
// Declarations
/// @brief Field <camera>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera_k__BackingField, put=__cordl_internal_set__camera_k__BackingField)) ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField;

/// @brief Field <frameCount>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameCount_k__BackingField, put=__cordl_internal_set__frameCount_k__BackingField)) int32_t  _frameCount_k__BackingField;

/// @brief Field <historyRTSystem>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__historyRTSystem_k__BackingField, put=__cordl_internal_set__historyRTSystem_k__BackingField)) ::UnityEngine::Rendering::BufferedRTHandleSystem*  _historyRTSystem_k__BackingField;

/// @brief Field <lastRenderedFrame>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastRenderedFrame_k__BackingField, put=__cordl_internal_set__lastRenderedFrame_k__BackingField)) int32_t  _lastRenderedFrame_k__BackingField;

 __declspec(property(get=get_camera, put=set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

 __declspec(property(get=get_frameCount, put=set_frameCount)) int32_t  frameCount;

 __declspec(property(get=get_historyRTSystem, put=set_historyRTSystem)) ::UnityEngine::Rendering::BufferedRTHandleSystem*  historyRTSystem;

 __declspec(property(get=get_lastRenderedFrame, put=set_lastRenderedFrame)) int32_t  lastRenderedFrame;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__frameCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__frameCount_k__BackingField() ;

constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& __cordl_internal_get__historyRTSystem_k__BackingField() const;

constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& __cordl_internal_get__historyRTSystem_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__lastRenderedFrame_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__lastRenderedFrame_k__BackingField() ;

constexpr void __cordl_internal_set__camera_k__BackingField(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__frameCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__historyRTSystem_k__BackingField(::UnityEngine::Rendering::BufferedRTHandleSystem*  value) ;

constexpr void __cordl_internal_set__lastRenderedFrame_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_camera, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_camera() ;

/// @brief Method get_frameCount, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_frameCount() ;

/// @brief Method get_historyRTSystem, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::BufferedRTHandleSystem* get_historyRTSystem() ;

/// @brief Method get_lastRenderedFrame, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_lastRenderedFrame() ;

/// @brief Method set_camera, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_camera(::UnityEngine::Camera*  value) ;

/// @brief Method set_frameCount, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_frameCount(int32_t  value) ;

/// @brief Method set_historyRTSystem, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_historyRTSystem(::UnityEngine::Rendering::BufferedRTHandleSystem*  value) ;

/// @brief Method set_lastRenderedFrame, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_lastRenderedFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers(HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers(HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20255};

/// @brief Field <camera>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera_k__BackingField;

/// @brief Field <historyRTSystem>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::BufferedRTHandleSystem*  ____historyRTSystem_k__BackingField;

/// @brief Field <frameCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____frameCount_k__BackingField;

/// @brief Field <lastRenderedFrame>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____lastRenderedFrame_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers, ____camera_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers, ____historyRTSystem_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers, ____frameCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers, ____lastRenderedFrame_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers) == 0x28, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/HistoryBufferType
struct CORDL_TYPE HBAORenderPass_HBAORendererFeature_HistoryBufferType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAORenderPass_HBAORendererFeature_HistoryBufferType_Unwrapped
enum struct __HBAORenderPass_HBAORendererFeature_HistoryBufferType_Unwrapped : int32_t {
__E_AmbientOcclusion = static_cast<int32_t>(0x0),
__E_ColorBleeding = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAORenderPass_HBAORendererFeature_HistoryBufferType_Unwrapped () const noexcept {
return static_cast<__HBAORenderPass_HBAORendererFeature_HistoryBufferType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature_HistoryBufferType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAORenderPass_HBAORendererFeature_HistoryBufferType(int32_t  value__) noexcept;

/// @brief Field AmbientOcclusion value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType const AmbientOcclusion;

/// @brief Field ColorBleeding value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType const ColorBleeding;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass/<>c
class CORDL_TYPE HBAORenderPass_HBAORendererFeature___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*  __9;

/// @brief Field <>9__113_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__113_0, put=setStaticF___9__113_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__113_0;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__113_0, addr 0x1813fe620, size 0x20, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__113_0(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__113_0() ;

static inline void setStaticF___9(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*  value) ;

static inline void setStaticF___9__113_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORenderPass_HBAORendererFeature___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORenderPass_HBAORendererFeature___c(HBAORenderPass_HBAORendererFeature___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORenderPass_HBAORendererFeature___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORenderPass_HBAORendererFeature___c(HBAORenderPass_HBAORendererFeature___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::NoiseType, HorizonBasedAmbientOcclusion.Universal.HBAO::Resolution, System.Nullable`1<T>, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.RenderTextureDescriptor, UnityEngine.RenderTextureFormat, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.Universal.CameraData, UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Vector2, UnityEngine.Vector4, UnityEngine.XR.XRSettings::StereoRenderingMode
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature/HBAORenderPass
class CORDL_TYPE HBAORendererFeature_HBAORenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using CameraHistoryBuffers = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers;

using HistoryBufferType = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType;

using MersenneTwister = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister;

using Pass = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_Pass;

using PassData = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData;

using ShaderProperties = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties;

using __c = ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c;

/// @brief Field <aoDesc>k__BackingField, offset 0xd4, size 0x34 
 __declspec(property(get=__cordl_internal_get__aoDesc_k__BackingField, put=__cordl_internal_set__aoDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _aoDesc_k__BackingField;

/// @brief Field <cameraData>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraData_k__BackingField, put=__cordl_internal_set__cameraData_k__BackingField)) ::UnityEngine::Rendering::Universal::CameraData  _cameraData_k__BackingField;

/// @brief Field <colorFormat>k__BackingField, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorFormat_k__BackingField, put=__cordl_internal_set__colorFormat_k__BackingField)) ::UnityEngine::RenderTextureFormat  _colorFormat_k__BackingField;

/// @brief Field <deinterleavedAoDesc>k__BackingField, offset 0x170, size 0x34 
 __declspec(property(get=__cordl_internal_get__deinterleavedAoDesc_k__BackingField, put=__cordl_internal_set__deinterleavedAoDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _deinterleavedAoDesc_k__BackingField;

/// @brief Field <deinterleavedDepthDesc>k__BackingField, offset 0x108, size 0x34 
 __declspec(property(get=__cordl_internal_get__deinterleavedDepthDesc_k__BackingField, put=__cordl_internal_set__deinterleavedDepthDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _deinterleavedDepthDesc_k__BackingField;

/// @brief Field <deinterleavedNormalsDesc>k__BackingField, offset 0x13c, size 0x34 
 __declspec(property(get=__cordl_internal_get__deinterleavedNormalsDesc_k__BackingField, put=__cordl_internal_set__deinterleavedNormalsDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _deinterleavedNormalsDesc_k__BackingField;

/// @brief Field <depthFormat>k__BackingField, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthFormat_k__BackingField, put=__cordl_internal_set__depthFormat_k__BackingField)) ::UnityEngine::RenderTextureFormat  _depthFormat_k__BackingField;

/// @brief Field <graphicsColorFormat>k__BackingField, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get__graphicsColorFormat_k__BackingField, put=__cordl_internal_set__graphicsColorFormat_k__BackingField)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  _graphicsColorFormat_k__BackingField;

/// @brief Field <graphicsDepthFormat>k__BackingField, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get__graphicsDepthFormat_k__BackingField, put=__cordl_internal_set__graphicsDepthFormat_k__BackingField)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  _graphicsDepthFormat_k__BackingField;

/// @brief Field <graphicsNormalsFormat>k__BackingField, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get__graphicsNormalsFormat_k__BackingField, put=__cordl_internal_set__graphicsNormalsFormat_k__BackingField)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  _graphicsNormalsFormat_k__BackingField;

/// @brief Field <material>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__material_k__BackingField, put=__cordl_internal_set__material_k__BackingField)) ::UnityW<::UnityEngine::Material>  _material_k__BackingField;

/// @brief Field <motionVectorsSupported>k__BackingField, offset 0x228, size 0x1 
 __declspec(property(get=__cordl_internal_get__motionVectorsSupported_k__BackingField, put=__cordl_internal_set__motionVectorsSupported_k__BackingField)) bool  _motionVectorsSupported_k__BackingField;

/// @brief Field <noiseTex>k__BackingField, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__noiseTex_k__BackingField, put=__cordl_internal_set__noiseTex_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _noiseTex_k__BackingField;

/// @brief Field <normalsFormat>k__BackingField, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalsFormat_k__BackingField, put=__cordl_internal_set__normalsFormat_k__BackingField)) ::UnityEngine::RenderTextureFormat  _normalsFormat_k__BackingField;

/// @brief Field <reinterleavedAoDesc>k__BackingField, offset 0x1a4, size 0x34 
 __declspec(property(get=__cordl_internal_get__reinterleavedAoDesc_k__BackingField, put=__cordl_internal_set__reinterleavedAoDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _reinterleavedAoDesc_k__BackingField;

/// @brief Field <sourceDesc>k__BackingField, offset 0xa0, size 0x34 
 __declspec(property(get=__cordl_internal_get__sourceDesc_k__BackingField, put=__cordl_internal_set__sourceDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _sourceDesc_k__BackingField;

/// @brief Field <source>k__BackingField, offset 0x70, size 0x28 
 __declspec(property(get=__cordl_internal_get__source_k__BackingField, put=__cordl_internal_set__source_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier  _source_k__BackingField;

/// @brief Field <ssaoDesc>k__BackingField, offset 0x1d8, size 0x34 
 __declspec(property(get=__cordl_internal_get__ssaoDesc_k__BackingField, put=__cordl_internal_set__ssaoDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor  _ssaoDesc_k__BackingField;

/// @brief Field <ssaoFormat>k__BackingField, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get__ssaoFormat_k__BackingField, put=__cordl_internal_set__ssaoFormat_k__BackingField)) ::UnityEngine::RenderTextureFormat  _ssaoFormat_k__BackingField;

 __declspec(property(get=get_aoDesc, put=set_aoDesc)) ::UnityEngine::RenderTextureDescriptor  aoDesc;

 __declspec(property(get=get_cameraData, put=set_cameraData)) ::UnityEngine::Rendering::Universal::CameraData  cameraData;

 __declspec(property(get=get_colorFormat, put=set_colorFormat)) ::UnityEngine::RenderTextureFormat  colorFormat;

 __declspec(property(get=get_deinterleavedAoDesc, put=set_deinterleavedAoDesc)) ::UnityEngine::RenderTextureDescriptor  deinterleavedAoDesc;

 __declspec(property(get=get_deinterleavedDepthDesc, put=set_deinterleavedDepthDesc)) ::UnityEngine::RenderTextureDescriptor  deinterleavedDepthDesc;

 __declspec(property(get=get_deinterleavedNormalsDesc, put=set_deinterleavedNormalsDesc)) ::UnityEngine::RenderTextureDescriptor  deinterleavedNormalsDesc;

 __declspec(property(get=get_depthFormat, put=set_depthFormat)) ::UnityEngine::RenderTextureFormat  depthFormat;

 __declspec(property(get=get_fullscreenTriangle)) ::UnityW<::UnityEngine::Mesh>  fullscreenTriangle;

 __declspec(property(get=get_graphicsColorFormat, put=set_graphicsColorFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsColorFormat;

 __declspec(property(get=get_graphicsDepthFormat, put=set_graphicsDepthFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsDepthFormat;

 __declspec(property(get=get_graphicsNormalsFormat, put=set_graphicsNormalsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsNormalsFormat;

/// @brief Field hbao, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hbao, put=__cordl_internal_set_hbao)) ::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>  hbao;

/// @brief Field m_CameraHistoryBuffers, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraHistoryBuffers, put=__cordl_internal_set_m_CameraHistoryBuffers)) ::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>*  m_CameraHistoryBuffers;

/// @brief Field m_FullscreenTriangle, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FullscreenTriangle, put=__cordl_internal_set_m_FullscreenTriangle)) ::UnityW<::UnityEngine::Mesh>  m_FullscreenTriangle;

/// @brief Field m_MaterialPropertyBlock, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MaterialPropertyBlock, put=__cordl_internal_set_m_MaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  m_MaterialPropertyBlock;

/// @brief Field m_PrevStereoRenderingMode, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrevStereoRenderingMode, put=__cordl_internal_set_m_PrevStereoRenderingMode)) ::UnityEngine::XR::XRSettings_StereoRenderingMode  m_PrevStereoRenderingMode;

/// @brief Field m_PreviousColorBleedingEnabled, offset 0x258, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviousColorBleedingEnabled, put=__cordl_internal_set_m_PreviousColorBleedingEnabled)) bool  m_PreviousColorBleedingEnabled;

/// @brief Field m_PreviousNoiseType, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousNoiseType, put=__cordl_internal_set_m_PreviousNoiseType)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>  m_PreviousNoiseType;

/// @brief Field m_PreviousResolution, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousResolution, put=__cordl_internal_set_m_PreviousResolution)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>  m_PreviousResolution;

/// @brief Field m_ProfilingSampler, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProfilingSampler, put=__cordl_internal_set_m_ProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler*  m_ProfilingSampler;

/// @brief Field m_RadiusPerEye, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RadiusPerEye, put=__cordl_internal_set_m_RadiusPerEye)) ::ArrayW<float_t>  m_RadiusPerEye;

/// @brief Field m_RtsDepth, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RtsDepth, put=__cordl_internal_set_m_RtsDepth)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_RtsDepth;

/// @brief Field m_RtsNormals, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RtsNormals, put=__cordl_internal_set_m_RtsNormals)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_RtsNormals;

/// @brief Field m_RtsTemporalFilter, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RtsTemporalFilter, put=__cordl_internal_set_m_RtsTemporalFilter)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  m_RtsTemporalFilter;

/// @brief Field m_ShaderKeywords, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShaderKeywords, put=__cordl_internal_set_m_ShaderKeywords)) ::ArrayW<::StringW>  m_ShaderKeywords;

/// @brief Field m_UVToViewPerEye, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UVToViewPerEye, put=__cordl_internal_set_m_UVToViewPerEye)) ::ArrayW<::UnityEngine::Vector4>  m_UVToViewPerEye;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(get=get_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

 __declspec(property(get=get_motionVectorsSupported, put=set_motionVectorsSupported)) bool  motionVectorsSupported;

 __declspec(property(get=get_noiseTex, put=set_noiseTex)) ::UnityW<::UnityEngine::Texture2D>  noiseTex;

 __declspec(property(get=get_normalsFormat, put=set_normalsFormat)) ::UnityEngine::RenderTextureFormat  normalsFormat;

 __declspec(property(get=get_reinterleavedAoDesc, put=set_reinterleavedAoDesc)) ::UnityEngine::RenderTextureDescriptor  reinterleavedAoDesc;

 __declspec(property(get=get_renderingInSceneView)) bool  renderingInSceneView;

/// @brief Field s_jitter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_jitter, put=setStaticF_s_jitter)) ::ArrayW<::UnityEngine::Vector2>  s_jitter;

/// @brief Field s_temporalOffsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_temporalOffsets, put=setStaticF_s_temporalOffsets)) ::ArrayW<float_t>  s_temporalOffsets;

/// @brief Field s_temporalRotations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_temporalRotations, put=setStaticF_s_temporalRotations)) ::ArrayW<float_t>  s_temporalRotations;

 __declspec(property(get=get_source, put=set_source)) ::UnityEngine::Rendering::RenderTargetIdentifier  source;

 __declspec(property(get=get_sourceDesc, put=set_sourceDesc)) ::UnityEngine::RenderTextureDescriptor  sourceDesc;

 __declspec(property(get=get_ssaoDesc, put=set_ssaoDesc)) ::UnityEngine::RenderTextureDescriptor  ssaoDesc;

 __declspec(property(get=get_ssaoFormat, put=set_ssaoFormat)) ::UnityEngine::RenderTextureFormat  ssaoFormat;

/// @brief Method AO, addr 0x1813f0af0, size 0x2b0, virtual false, abstract: false, final false
inline void AO(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method AdjustBrightnessMaskToGammaSpace, addr 0x1813f0da0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 AdjustBrightnessMaskToGammaSpace(::UnityEngine::Vector2  v) ;

/// @brief Method AllocCameraHistoryBuffers, addr 0x1813f1030, size 0x210, virtual false, abstract: false, final false
inline void AllocCameraHistoryBuffers(::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>  buffers) ;

/// @brief Method AllocCameraHistoryBuffersRG, addr 0x1813f0e20, size 0x210, virtual false, abstract: false, final false
inline void AllocCameraHistoryBuffersRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>  buffers) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f1750, size 0x1a0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f1590, size 0x1c0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f1d50, size 0x190, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f1ee0, size 0x1c0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f1bf0, size 0x160, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f20a0, size 0x180, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f18f0, size 0x170, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813f1a60, size 0x190, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex) ;

/// @brief Method BlitFullscreenTriangleWithClear, addr 0x1813f13c0, size 0x1d0, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangleWithClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Color  clearColor, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method BlitFullscreenTriangleWithClear, addr 0x1813f1240, size 0x180, virtual false, abstract: false, final false
static inline void BlitFullscreenTriangleWithClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Color  clearColor, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex) ;

/// @brief Method Blur, addr 0x1813f2220, size 0x5a0, virtual false, abstract: false, final false
inline void Blur(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method CheckParameters, addr 0x1813f27c0, size 0x2d0, virtual false, abstract: false, final false
inline void CheckParameters() ;

/// @brief Method Cleanup, addr 0x1813f2a90, size 0x120, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Composite, addr 0x1813f2bb0, size 0x380, virtual false, abstract: false, final false
inline void Composite(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Configure, addr 0x1813f2f30, size 0x140, virtual true, abstract: false, final false
inline void Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor) ;

/// @brief Method CopySource, addr 0x1813f3070, size 0x200, virtual false, abstract: false, final false
inline void CopySource(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method CreateNoiseTexture, addr 0x1813f3270, size 0x340, virtual false, abstract: false, final false
inline void CreateNoiseTexture() ;

/// @brief Method DeinterleavedAO, addr 0x1813f35b0, size 0xea0, virtual false, abstract: false, final false
inline void DeinterleavedAO(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Execute, addr 0x1813f5490, size 0x710, virtual true, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method ExecutePass, addr 0x1813f4450, size 0x1040, virtual false, abstract: false, final false
static inline void ExecutePass(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  rgContext) ;

/// @brief Method FetchRenderParameters, addr 0x1813f5ba0, size 0x590, virtual false, abstract: false, final false
inline void FetchRenderParameters(::UnityEngine::RenderTextureDescriptor  cameraTextureDesc) ;

/// @brief Method FetchVolumeComponent, addr 0x1813f6130, size 0x60, virtual false, abstract: false, final false
inline void FetchVolumeComponent() ;

/// @brief Method FillSupportedRenderTextureFormats, addr 0x1813f6190, size 0x110, virtual false, abstract: false, final false
inline void FillSupportedRenderTextureFormats() ;

/// @brief Method FrameCleanup, addr 0x1813f62a0, size 0x140, virtual true, abstract: false, final false
inline void FrameCleanup(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method GetCurrentCameraHistoryBuffers, addr 0x1813f6650, size 0x2b0, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* GetCurrentCameraHistoryBuffers() ;

/// @brief Method GetCurrentCameraHistoryBuffersRG, addr 0x1813f63e0, size 0x270, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* GetCurrentCameraHistoryBuffersRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method GetStereoCompatibleDescriptor, addr 0x1813f6900, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor GetStereoCompatibleDescriptor(int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, int32_t  depthBufferBits, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method HistoryBufferAllocator, addr 0x1813f69c0, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* HistoryBufferAllocator(::UnityEngine::Rendering::RTHandleSystem*  rtHandleSystem, int32_t  frameIndex) ;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass* New_ctor() ;

/// @brief Method OnCameraSetup, addr 0x1813f6b00, size 0x90, virtual true, abstract: false, final false
inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method RecordRenderGraph, addr 0x1813f6b90, size 0x11a0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method ReleaseCameraHistoryBuffers, addr 0x1813f7d30, size 0x80, virtual false, abstract: false, final false
inline void ReleaseCameraHistoryBuffers(::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>  buffers) ;

/// @brief Method Setup, addr 0x1813f7db0, size 0x1e0, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Shader*  shader, ::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::UnityEngine::Rendering::Universal::RenderingData  renderingData) ;

/// @brief Method TemporalFilter, addr 0x1813f7f90, size 0x900, virtual false, abstract: false, final false
inline void TemporalFilter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  buffers) ;

/// @brief Method ToGammaSpace, addr 0x1813f8890, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ToGammaSpace(::UnityEngine::Vector2  v) ;

/// @brief Method ToGammaSpace, addr 0x1813f88e0, size 0x10, virtual false, abstract: false, final false
inline float_t ToGammaSpace(float_t  v) ;

/// @brief Method UpdateMaterialProperties, addr 0x1813f9920, size 0x10f0, virtual false, abstract: false, final false
inline void UpdateMaterialProperties() ;

/// @brief Method UpdateMaterialPropertiesRG, addr 0x1813f88f0, size 0x1030, virtual false, abstract: false, final false
inline void UpdateMaterialPropertiesRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method UpdateShaderKeywords, addr 0x1813fb040, size 0x640, virtual false, abstract: false, final false
inline void UpdateShaderKeywords() ;

/// @brief Method UpdateShaderKeywordsRG, addr 0x1813faa10, size 0x630, virtual false, abstract: false, final false
inline void UpdateShaderKeywordsRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__aoDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__aoDesc_k__BackingField() ;

constexpr ::UnityEngine::Rendering::Universal::CameraData const& __cordl_internal_get__cameraData_k__BackingField() const;

constexpr ::UnityEngine::Rendering::Universal::CameraData& __cordl_internal_get__cameraData_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get__colorFormat_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get__colorFormat_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__deinterleavedAoDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__deinterleavedAoDesc_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__deinterleavedDepthDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__deinterleavedDepthDesc_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__deinterleavedNormalsDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__deinterleavedNormalsDesc_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get__depthFormat_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get__depthFormat_k__BackingField() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get__graphicsColorFormat_k__BackingField() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get__graphicsColorFormat_k__BackingField() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get__graphicsDepthFormat_k__BackingField() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get__graphicsDepthFormat_k__BackingField() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get__graphicsNormalsFormat_k__BackingField() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get__graphicsNormalsFormat_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material_k__BackingField() ;

constexpr bool const& __cordl_internal_get__motionVectorsSupported_k__BackingField() const;

constexpr bool& __cordl_internal_get__motionVectorsSupported_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__noiseTex_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__noiseTex_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get__normalsFormat_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get__normalsFormat_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__reinterleavedAoDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__reinterleavedAoDesc_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__sourceDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__sourceDesc_k__BackingField() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__source_k__BackingField() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__source_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__ssaoDesc_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__ssaoDesc_k__BackingField() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get__ssaoFormat_k__BackingField() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get__ssaoFormat_k__BackingField() ;

constexpr ::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO> const& __cordl_internal_get_hbao() const;

constexpr ::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>& __cordl_internal_get_hbao() ;

constexpr ::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>* const& __cordl_internal_get_m_CameraHistoryBuffers() const;

constexpr ::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>*& __cordl_internal_get_m_CameraHistoryBuffers() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_FullscreenTriangle() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_FullscreenTriangle() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_MaterialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_MaterialPropertyBlock() ;

constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode const& __cordl_internal_get_m_PrevStereoRenderingMode() const;

constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode& __cordl_internal_get_m_PrevStereoRenderingMode() ;

constexpr bool const& __cordl_internal_get_m_PreviousColorBleedingEnabled() const;

constexpr bool& __cordl_internal_get_m_PreviousColorBleedingEnabled() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType> const& __cordl_internal_get_m_PreviousNoiseType() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>& __cordl_internal_get_m_PreviousNoiseType() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution> const& __cordl_internal_get_m_PreviousResolution() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>& __cordl_internal_get_m_PreviousResolution() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSampler() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_RadiusPerEye() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_RadiusPerEye() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_m_RtsDepth() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_m_RtsDepth() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_m_RtsNormals() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_m_RtsNormals() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_m_RtsTemporalFilter() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_m_RtsTemporalFilter() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_ShaderKeywords() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_ShaderKeywords() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_UVToViewPerEye() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_UVToViewPerEye() ;

constexpr void __cordl_internal_set__aoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__cameraData_k__BackingField(::UnityEngine::Rendering::Universal::CameraData  value) ;

constexpr void __cordl_internal_set__colorFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set__deinterleavedAoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__deinterleavedDepthDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__deinterleavedNormalsDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__depthFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set__graphicsColorFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set__graphicsDepthFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set__graphicsNormalsFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__motionVectorsSupported_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__noiseTex_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__normalsFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set__reinterleavedAoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__sourceDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__ssaoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set__ssaoFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set_hbao(::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>  value) ;

constexpr void __cordl_internal_set_m_CameraHistoryBuffers(::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>*  value) ;

constexpr void __cordl_internal_set_m_FullscreenTriangle(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_m_MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_m_PrevStereoRenderingMode(::UnityEngine::XR::XRSettings_StereoRenderingMode  value) ;

constexpr void __cordl_internal_set_m_PreviousColorBleedingEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousNoiseType(::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>  value) ;

constexpr void __cordl_internal_set_m_PreviousResolution(::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>  value) ;

constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

constexpr void __cordl_internal_set_m_RadiusPerEye(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_RtsDepth(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set_m_RtsNormals(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set_m_RtsTemporalFilter(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value) ;

constexpr void __cordl_internal_set_m_ShaderKeywords(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_UVToViewPerEye(::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method .ctor, addr 0x1813fb770, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_s_jitter() ;

static inline ::ArrayW<float_t> getStaticF_s_temporalOffsets() ;

static inline ::ArrayW<float_t> getStaticF_s_temporalRotations() ;

/// @brief Method get_aoDesc, addr 0x1813fb8c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_aoDesc() ;

/// @brief Method get_cameraData, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::CameraData get_cameraData() ;

/// @brief Method get_colorFormat, addr 0x1813fb8f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_colorFormat() ;

/// @brief Method get_deinterleavedAoDesc, addr 0x1813fb900, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_deinterleavedAoDesc() ;

/// @brief Method get_deinterleavedDepthDesc, addr 0x1813fb930, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_deinterleavedDepthDesc() ;

/// @brief Method get_deinterleavedNormalsDesc, addr 0x1813fb960, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_deinterleavedNormalsDesc() ;

/// @brief Method get_depthFormat, addr 0x1813fb990, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_depthFormat() ;

/// @brief Method get_fullscreenTriangle, addr 0x1813fb9a0, size 0x260, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_fullscreenTriangle() ;

/// @brief Method get_graphicsColorFormat, addr 0x1813fbc00, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsColorFormat() ;

/// @brief Method get_graphicsDepthFormat, addr 0x1813fbc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsDepthFormat() ;

/// @brief Method get_graphicsNormalsFormat, addr 0x1813fbc20, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsNormalsFormat() ;

/// @brief Method get_isLinearColorSpace, addr 0x1813efe50, size 0x20, virtual false, abstract: false, final false
static inline bool get_isLinearColorSpace() ;

/// @brief Method get_material, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_materialPropertyBlock, addr 0x1813fbc30, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock() ;

/// @brief Method get_motionVectorsSupported, addr 0x1813fbca0, size 0x10, virtual false, abstract: false, final false
inline bool get_motionVectorsSupported() ;

/// @brief Method get_noiseTex, addr 0x1813fbcb0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_noiseTex() ;

/// @brief Method get_normalsFormat, addr 0x1813fbcc0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_normalsFormat() ;

/// @brief Method get_reinterleavedAoDesc, addr 0x1813fbcd0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_reinterleavedAoDesc() ;

/// @brief Method get_renderingInSceneView, addr 0x1813fbd00, size 0x40, virtual false, abstract: false, final false
inline bool get_renderingInSceneView() ;

/// @brief Method get_source, addr 0x1813fbd70, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderTargetIdentifier get_source() ;

/// @brief Method get_sourceDesc, addr 0x1813fbd40, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_sourceDesc() ;

/// @brief Method get_ssaoDesc, addr 0x1813fbda0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_ssaoDesc() ;

/// @brief Method get_ssaoFormat, addr 0x1813fbdd0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_ssaoFormat() ;

static inline void setStaticF_s_jitter(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_s_temporalOffsets(::ArrayW<float_t>  value) ;

static inline void setStaticF_s_temporalRotations(::ArrayW<float_t>  value) ;

/// @brief Method set_aoDesc, addr 0x1813fbde0, size 0x30, virtual false, abstract: false, final false
inline void set_aoDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_cameraData, addr 0x1813fbe10, size 0x20, virtual false, abstract: false, final false
inline void set_cameraData(::UnityEngine::Rendering::Universal::CameraData  value) ;

/// @brief Method set_colorFormat, addr 0x1813fbe30, size 0x10, virtual false, abstract: false, final false
inline void set_colorFormat(::UnityEngine::RenderTextureFormat  value) ;

/// @brief Method set_deinterleavedAoDesc, addr 0x1813fbe40, size 0x30, virtual false, abstract: false, final false
inline void set_deinterleavedAoDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_deinterleavedDepthDesc, addr 0x1813fbe70, size 0x30, virtual false, abstract: false, final false
inline void set_deinterleavedDepthDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_deinterleavedNormalsDesc, addr 0x1813fbea0, size 0x30, virtual false, abstract: false, final false
inline void set_deinterleavedNormalsDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_depthFormat, addr 0x1813fbed0, size 0x10, virtual false, abstract: false, final false
inline void set_depthFormat(::UnityEngine::RenderTextureFormat  value) ;

/// @brief Method set_graphicsColorFormat, addr 0x1813fbee0, size 0x10, virtual false, abstract: false, final false
inline void set_graphicsColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_graphicsDepthFormat, addr 0x1813fbef0, size 0x10, virtual false, abstract: false, final false
inline void set_graphicsDepthFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_graphicsNormalsFormat, addr 0x1813fbf00, size 0x10, virtual false, abstract: false, final false
inline void set_graphicsNormalsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_material, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_motionVectorsSupported, addr 0x1813fbf10, size 0x10, virtual false, abstract: false, final false
inline void set_motionVectorsSupported(bool  value) ;

/// @brief Method set_noiseTex, addr 0x1813fbf20, size 0x20, virtual false, abstract: false, final false
inline void set_noiseTex(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_normalsFormat, addr 0x1813fbf40, size 0x10, virtual false, abstract: false, final false
inline void set_normalsFormat(::UnityEngine::RenderTextureFormat  value) ;

/// @brief Method set_reinterleavedAoDesc, addr 0x1813fbf50, size 0x30, virtual false, abstract: false, final false
inline void set_reinterleavedAoDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_source, addr 0x1813fbfb0, size 0x20, virtual false, abstract: false, final false
inline void set_source(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method set_sourceDesc, addr 0x1813fbf80, size 0x30, virtual false, abstract: false, final false
inline void set_sourceDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_ssaoDesc, addr 0x1813fbfd0, size 0x30, virtual false, abstract: false, final false
inline void set_ssaoDesc(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method set_ssaoFormat, addr 0x1813fc000, size 0x10, virtual false, abstract: false, final false
inline void set_ssaoFormat(::UnityEngine::RenderTextureFormat  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORendererFeature_HBAORenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORendererFeature_HBAORenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORendererFeature_HBAORenderPass(HBAORendererFeature_HBAORenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORendererFeature_HBAORenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORendererFeature_HBAORenderPass(HBAORendererFeature_HBAORenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20258};

/// @brief Field hbao, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>  ___hbao;

/// @brief Field <material>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material_k__BackingField;

/// @brief Field <source>k__BackingField, offset: 0x70, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____source_k__BackingField;

/// @brief Field <cameraData>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::CameraData  ____cameraData_k__BackingField;

/// @brief Field <sourceDesc>k__BackingField, offset: 0xa0, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____sourceDesc_k__BackingField;

/// @brief Field <aoDesc>k__BackingField, offset: 0xd4, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____aoDesc_k__BackingField;

/// @brief Field <deinterleavedDepthDesc>k__BackingField, offset: 0x108, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____deinterleavedDepthDesc_k__BackingField;

/// @brief Field <deinterleavedNormalsDesc>k__BackingField, offset: 0x13c, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____deinterleavedNormalsDesc_k__BackingField;

/// @brief Field <deinterleavedAoDesc>k__BackingField, offset: 0x170, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____deinterleavedAoDesc_k__BackingField;

/// @brief Field <reinterleavedAoDesc>k__BackingField, offset: 0x1a4, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____reinterleavedAoDesc_k__BackingField;

/// @brief Field <ssaoDesc>k__BackingField, offset: 0x1d8, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ____ssaoDesc_k__BackingField;

/// @brief Field <colorFormat>k__BackingField, offset: 0x20c, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ____colorFormat_k__BackingField;

/// @brief Field <ssaoFormat>k__BackingField, offset: 0x210, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ____ssaoFormat_k__BackingField;

/// @brief Field <graphicsColorFormat>k__BackingField, offset: 0x214, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ____graphicsColorFormat_k__BackingField;

/// @brief Field <graphicsDepthFormat>k__BackingField, offset: 0x218, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ____graphicsDepthFormat_k__BackingField;

/// @brief Field <graphicsNormalsFormat>k__BackingField, offset: 0x21c, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ____graphicsNormalsFormat_k__BackingField;

/// @brief Field <depthFormat>k__BackingField, offset: 0x220, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ____depthFormat_k__BackingField;

/// @brief Field <normalsFormat>k__BackingField, offset: 0x224, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ____normalsFormat_k__BackingField;

/// @brief Field <motionVectorsSupported>k__BackingField, offset: 0x228, size: 0x1, def value: None
 bool  ____motionVectorsSupported_k__BackingField;

/// @brief Field <noiseTex>k__BackingField, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____noiseTex_k__BackingField;

/// @brief Field m_FullscreenTriangle, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_FullscreenTriangle;

/// @brief Field m_MaterialPropertyBlock, offset: 0x240, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_MaterialPropertyBlock;

/// @brief Field m_PreviousResolution, offset: 0x248, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>  ___m_PreviousResolution;

/// @brief Field m_PreviousNoiseType, offset: 0x250, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>  ___m_PreviousNoiseType;

/// @brief Field m_PreviousColorBleedingEnabled, offset: 0x258, size: 0x1, def value: None
 bool  ___m_PreviousColorBleedingEnabled;

/// @brief Field m_PrevStereoRenderingMode, offset: 0x25c, size: 0x4, def value: None
 ::UnityEngine::XR::XRSettings_StereoRenderingMode  ___m_PrevStereoRenderingMode;

/// @brief Field m_ShaderKeywords, offset: 0x260, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_ShaderKeywords;

/// @brief Field m_RtsDepth, offset: 0x268, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ___m_RtsDepth;

/// @brief Field m_RtsNormals, offset: 0x270, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ___m_RtsNormals;

/// @brief Field m_RtsTemporalFilter, offset: 0x278, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  ___m_RtsTemporalFilter;

/// @brief Field m_CameraHistoryBuffers, offset: 0x280, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>*  ___m_CameraHistoryBuffers;

/// @brief Field m_UVToViewPerEye, offset: 0x288, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_UVToViewPerEye;

/// @brief Field m_RadiusPerEye, offset: 0x290, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_RadiusPerEye;

/// @brief Field m_ProfilingSampler, offset: 0x298, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ___m_ProfilingSampler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___hbao) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____material_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____source_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____cameraData_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____sourceDesc_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____aoDesc_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____deinterleavedDepthDesc_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____deinterleavedNormalsDesc_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____deinterleavedAoDesc_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____reinterleavedAoDesc_k__BackingField) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____ssaoDesc_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____colorFormat_k__BackingField) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____ssaoFormat_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____graphicsColorFormat_k__BackingField) == 0x214, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____graphicsDepthFormat_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____graphicsNormalsFormat_k__BackingField) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____depthFormat_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____normalsFormat_k__BackingField) == 0x224, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____motionVectorsSupported_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ____noiseTex_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_FullscreenTriangle) == 0x238, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_MaterialPropertyBlock) == 0x240, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_PreviousResolution) == 0x248, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_PreviousNoiseType) == 0x250, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_PreviousColorBleedingEnabled) == 0x258, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_PrevStereoRenderingMode) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_ShaderKeywords) == 0x260, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_RtsDepth) == 0x268, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_RtsNormals) == 0x270, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_RtsTemporalFilter) == 0x278, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_CameraHistoryBuffers) == 0x280, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_UVToViewPerEye) == 0x288, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_RadiusPerEye) == 0x290, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass, ___m_ProfilingSampler) == 0x298, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass) == 0x2a0, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAORendererFeature
class CORDL_TYPE HBAORendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
using HBAORenderPass = ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass;

/// @brief Field m_HBAORenderPass, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HBAORenderPass, put=__cordl_internal_set_m_HBAORenderPass)) ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*  m_HBAORenderPass;

/// @brief Field shader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_shader, put=__cordl_internal_set_shader)) ::UnityW<::UnityEngine::Shader>  shader;

/// @brief Method AddRenderPasses, addr 0x1813fc010, size 0xe0, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x1813fc0f0, size 0x2b0, virtual true, abstract: false, final false
inline void Create() ;

/// @brief Method Dispose, addr 0x1813fc3a0, size 0x40, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature* New_ctor() ;

/// @brief Method OnDisable, addr 0x1813fc3e0, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass* const& __cordl_internal_get_m_HBAORenderPass() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*& __cordl_internal_get_m_HBAORenderPass() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_shader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_shader() ;

constexpr void __cordl_internal_set_m_HBAORenderPass(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*  value) ;

constexpr void __cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0x180324470, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAORendererFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAORendererFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAORendererFeature(HBAORendererFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAORendererFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAORendererFeature(HBAORendererFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20259};

/// @brief Field shader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___shader;

/// @brief Field m_HBAORenderPass, offset: 0x28, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*  ___m_HBAORenderPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature, ___shader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature, ___m_HBAORenderPass) == 0x28, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature) == 0x30, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
