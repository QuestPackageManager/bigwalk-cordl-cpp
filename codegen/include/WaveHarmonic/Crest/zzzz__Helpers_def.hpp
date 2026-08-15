#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Helpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormatUsage_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Helpers)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Type;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_SingleCameraRequest;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RenderPipeline_StandardRequest;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct FindObjectsInactive;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
namespace WaveHarmonic::Crest {
class Helpers_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class Helpers_Undo;
}
namespace WaveHarmonic::Crest {
class Undo_Helpers_Symbols;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Helpers;
}
namespace WaveHarmonic::Crest {
class Helpers_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class Helpers_Undo;
}
namespace WaveHarmonic::Crest {
class Undo_Helpers_Symbols;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Helpers*);
MARK_REF_T(::WaveHarmonic::Crest::Helpers_ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::Helpers_Undo*);
MARK_REF_T(::WaveHarmonic::Crest::Undo_Helpers_Symbols*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Helpers*, "WaveHarmonic.Crest", "Helpers");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Helpers_ShaderIDs*, "WaveHarmonic.Crest", "Helpers/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Helpers_Undo*, "WaveHarmonic.Crest", "Helpers/Undo");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Undo_Helpers_Symbols*, "WaveHarmonic.Crest", "Helpers/Undo/Symbols");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Helpers/ShaderIDs
class CORDL_TYPE Helpers_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_MainTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MainTexture, put=setStaticF_s_MainTexture)) int32_t  s_MainTexture;

static inline int32_t getStaticF_s_MainTexture() ;

static inline void setStaticF_s_MainTexture(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helpers_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helpers_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helpers_ShaderIDs(Helpers_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helpers_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helpers_ShaderIDs(Helpers_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Helpers_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Helpers/Undo/Symbols
class CORDL_TYPE Undo_Helpers_Symbols : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Undo_Helpers_Symbols() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Undo_Helpers_Symbols", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Undo_Helpers_Symbols(Undo_Helpers_Symbols && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Undo_Helpers_Symbols", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Undo_Helpers_Symbols(Undo_Helpers_Symbols const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20128};

/// @brief Field k_UnityEditor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UnityEditor{u"UNITY_EDITOR"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Undo_Helpers_Symbols) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Helpers/Undo
class CORDL_TYPE Helpers_Undo : public ::System::Object {
public:
// Declarations
using Symbols = ::WaveHarmonic::Crest::Undo_Helpers_Symbols;

/// @brief Method RecordObject, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void RecordObject(::UnityEngine::Object*  object, ::StringW  label) ;

/// @brief Method RegisterCreatedObjectUndo, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void RegisterCreatedObjectUndo(::UnityEngine::Object*  object, ::StringW  label) ;

/// @brief Method SetSiblingIndex, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetSiblingIndex(::UnityEngine::Transform*  transform, int32_t  index, ::StringW  label) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helpers_Undo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helpers_Undo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helpers_Undo(Helpers_Undo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helpers_Undo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helpers_Undo(Helpers_Undo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Helpers_Undo) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, System.Reflection.BindingFlags, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Experimental.Rendering.GraphicsFormatUsage, UnityEngine.Matrix4x4
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Helpers
class CORDL_TYPE Helpers : public ::System::Object {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::Helpers_ShaderIDs;

using Undo = ::WaveHarmonic::Crest::Helpers_Undo;

/// @brief Field <WaitForEndOfFrame>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WaitForEndOfFrame_k__BackingField, put=setStaticF__WaitForEndOfFrame_k__BackingField)) ::UnityEngine::WaitForEndOfFrame*  _WaitForEndOfFrame_k__BackingField;

/// @brief Field s_AnyMethod, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AnyMethod, put=setStaticF_s_AnyMethod)) ::System::Reflection::BindingFlags  s_AnyMethod;

/// @brief Field s_DataGraphicsFormatUsage, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DataGraphicsFormatUsage, put=setStaticF_s_DataGraphicsFormatUsage)) ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  s_DataGraphicsFormatUsage;

/// @brief Field s_FallbackGraphicsFormat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FallbackGraphicsFormat, put=setStaticF_s_FallbackGraphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  s_FallbackGraphicsFormat;

/// @brief Field s_Plane, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Plane, put=setStaticF_s_Plane)) ::UnityW<::UnityEngine::Mesh>  s_Plane;

/// @brief Field s_Quad, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Quad, put=setStaticF_s_Quad)) ::UnityW<::UnityEngine::Mesh>  s_Quad;

/// @brief Field s_RenderFeatureActiveStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderFeatureActiveStates, put=setStaticF_s_RenderFeatureActiveStates)) ::System::Collections::Generic::List_1<bool>*  s_RenderFeatureActiveStates;

/// @brief Field s_RenderSingleCameraRequest, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderSingleCameraRequest, put=setStaticF_s_RenderSingleCameraRequest)) ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*  s_RenderSingleCameraRequest;

/// @brief Field s_RenderStandardRequest, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderStandardRequest, put=setStaticF_s_RenderStandardRequest)) ::UnityEngine::Rendering::RenderPipeline_StandardRequest*  s_RenderStandardRequest;

/// @brief Field s_RendererIndex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RendererIndex, put=setStaticF_s_RendererIndex)) ::System::Reflection::FieldInfo*  s_RendererIndex;

/// @brief Field s_ScaleMatrix, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_s_ScaleMatrix, put=setStaticF_s_ScaleMatrix)) ::UnityEngine::Matrix4x4  s_ScaleMatrix;

/// @brief Field s_SphereMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SphereMesh, put=setStaticF_s_SphereMesh)) ::UnityW<::UnityEngine::Mesh>  s_SphereMesh;

/// @brief Field s_Terrains, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Terrains, put=setStaticF_s_Terrains)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  s_Terrains;

/// @brief Method Blit, addr 0x1825679c0, size 0x160, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::RenderTexture*  target, ::UnityEngine::Material*  material, int32_t  pass, int32_t  depthSlice, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Blit, addr 0x182567b20, size 0x140, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, ::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Blit, addr 0x182567c60, size 0x50, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  target) ;

/// @brief Method CalculateFrustumPlanesAndPoints, addr 0x182567cb0, size 0x30, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanesAndPoints(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Plane>  planes, ::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method CalculateFrustumPoints, addr 0x182567ce0, size 0x310, virtual false, abstract: false, final false
static inline void CalculateFrustumPoints(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method CalculateMipMapCount, addr 0x182567ff0, size 0x40, virtual false, abstract: false, final false
static inline int32_t CalculateMipMapCount(int32_t  maximumDimension) ;

/// @brief Method CalculateResolution, addr 0x182568170, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2Int CalculateResolution(::UnityEngine::Vector2  resolution, int32_t  maximum) ;

/// @brief Method CalculateResolutionFromTexelDensity, addr 0x182568030, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2Int CalculateResolutionFromTexelDensity(::UnityEngine::Vector2  worldSize, float_t  texelDensity, int32_t  maximum) ;

/// @brief Method CalculateResolutionFromTexelSize, addr 0x1825680e0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2Int CalculateResolutionFromTexelSize(::UnityEngine::Vector2  worldSize, float_t  texelSize, int32_t  maximum) ;

/// @brief Method CalculateWorldToCameraMatrixRHS, addr 0x1825681e0, size 0x220, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 CalculateWorldToCameraMatrixRHS(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Clear, addr 0x182568490, size 0x30, virtual false, abstract: false, final false
static inline void Clear(::UnityEngine::Object*  object) ;

/// @brief Method ClearRenderTexture, addr 0x182568400, size 0x90, virtual false, abstract: false, final false
static inline void ClearRenderTexture(::UnityEngine::RenderTexture*  texture, ::UnityEngine::Color  clear, bool  depth, bool  color) ;

/// @brief Method ConvertDepthBufferValueToDistance, addr 0x1825684c0, size 0x100, virtual false, abstract: false, final false
static inline float_t ConvertDepthBufferValueToDistance(::UnityEngine::Camera*  camera, float_t  depth) ;

/// @brief Method CreateRenderTargetTextureReference, addr 0x1825685c0, size 0xc0, virtual false, abstract: false, final false
static inline void CreateRenderTargetTextureReference(::by_ref<::UnityEngine::RenderTexture*>  texture, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  target) ;

/// @brief Method Destroy, addr 0x1825687c0, size 0x30, virtual false, abstract: false, final false
static inline void Destroy(::by_ref<::UnityEngine::ComputeBuffer*>  buffer) ;

/// @brief Method Destroy, addr 0x182568790, size 0x30, virtual false, abstract: false, final false
static inline void Destroy(::by_ref<::UnityEngine::Rendering::CommandBuffer*>  buffer) ;

/// @brief Method Destroy, addr 0x1825687f0, size 0xb0, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  object, bool  undo) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Destroy(::by_ref<T>  object, bool  undo) ;

/// @brief Method DestroyGameObject, addr 0x182568680, size 0x110, virtual false, abstract: false, final false
static inline void DestroyGameObject(::UnityEngine::Component*  object, bool  undo) ;

/// @brief Method DestroyGameObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void DestroyGameObject(::by_ref<T>  object, bool  undo) ;

/// @brief Method DuplicateComparison, addr 0x1825688a0, size 0x30, virtual false, abstract: false, final false
static inline int32_t DuplicateComparison(int32_t  x, int32_t  y) ;

/// @brief Method EyeDepthToNonLinear, addr 0x1825688d0, size 0x30, virtual false, abstract: false, final false
static inline float_t EyeDepthToNonLinear(float_t  depth, ::UnityEngine::Vector4  zBufferParameters) ;

/// @brief Method FindObjectsByType, addr 0x182568900, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  inactive) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> FindObjectsByType(::UnityEngine::FindObjectsInactive  inactive) ;

/// @brief Method Fmod, addr 0x182568910, size 0x50, virtual false, abstract: false, final false
static inline float_t Fmod(float_t  x, float_t  y) ;

/// @brief Method GetCompatibleTextureFormat, addr 0x182568aa0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  randomWrite) ;

/// @brief Method GetCompatibleTextureFormat, addr 0x182568960, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage, ::StringW  label, bool  randomWrite) ;

/// @brief Method GetCustomAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetCustomAttribute(::System::Type*  type) ;

/// @brief Method GetGlobalBoolean, addr 0x182568af0, size 0x30, virtual false, abstract: false, final false
static inline bool GetGlobalBoolean(int32_t  id) ;

/// @brief Method GetRendererIndex, addr 0x182568b20, size 0xb0, virtual false, abstract: false, final false
static inline int32_t GetRendererIndex(::UnityEngine::Camera*  camera) ;

/// @brief Method GetTerrainAtPosition, addr 0x182568bd0, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Terrain> GetTerrainAtPosition(::UnityEngine::Vector2  position) ;

/// @brief Method GetWebGPUTextureFormat, addr 0x182568db0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetWebGPUTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method GetZBufferParameters, addr 0x182568de0, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetZBufferParameters(::UnityEngine::Camera*  camera) ;

/// @brief Method InstantiatePrefab, addr 0x182568f70, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefab(::UnityEngine::GameObject*  prefab) ;

/// @brief Method IsIntelGPU, addr 0x182568f80, size 0x40, virtual false, abstract: false, final false
static inline bool IsIntelGPU() ;

/// @brief Method IsMSAAEnabled, addr 0x182568fc0, size 0x100, virtual false, abstract: false, final false
static inline bool IsMSAAEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method IsSSAOEnabled, addr 0x1825690c0, size 0x100, virtual false, abstract: false, final false
static inline bool IsSSAOEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method LinearDepthToNonLinear, addr 0x1825691c0, size 0x20, virtual false, abstract: false, final false
static inline float_t LinearDepthToNonLinear(float_t  depth, ::UnityEngine::Vector4  zBufferParameters) ;

/// @brief Method MaskIncludesLayer, addr 0x1825691e0, size 0x10, virtual false, abstract: false, final false
static inline bool MaskIncludesLayer(int32_t  mask, int32_t  layer) ;

/// @brief Method NonLinearToLinear01Depth, addr 0x1825691f0, size 0x20, virtual false, abstract: false, final false
static inline float_t NonLinearToLinear01Depth(float_t  depth, ::UnityEngine::Vector4  zBufferParameters) ;

/// @brief Method NonLinearToLinearEyeDepth, addr 0x182569210, size 0x20, virtual false, abstract: false, final false
static inline float_t NonLinearToLinearEyeDepth(float_t  depth, ::UnityEngine::Vector4  zBufferParameters) ;

/// @brief Method ReadRenderTexturePixel, addr 0x182569230, size 0x1f0, virtual false, abstract: false, final false
static inline void ReadRenderTexturePixel(::by_ref<::UnityEngine::RenderTexture*>  rt, ::by_ref<::UnityEngine::Texture2D*>  texture, int32_t  x, int32_t  y, int32_t  slice) ;

/// @brief Method ReadRenderTexturePixels, addr 0x182569420, size 0x1e0, virtual false, abstract: false, final false
static inline void ReadRenderTexturePixels(::by_ref<::UnityEngine::RenderTexture*>  rt, ::by_ref<::UnityEngine::Texture2D*>  texture, int32_t  slice) ;

/// @brief Method RenderCamera, addr 0x182569870, size 0xa0, virtual false, abstract: false, final false
static inline void RenderCamera(::UnityEngine::Camera*  camera) ;

/// @brief Method RenderCamera, addr 0x182569910, size 0xa0, virtual false, abstract: false, final false
static inline void RenderCamera(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::ScriptableRenderContext  context, int32_t  slice, bool  noRenderFeatures) ;

/// @brief Method RenderCameraWithoutCustomPasses, addr 0x182569600, size 0x270, virtual false, abstract: false, final false
static inline void RenderCameraWithoutCustomPasses(::UnityEngine::Camera*  camera) ;

/// @brief Method RenderTargetIdentifierXR, addr 0x1825699b0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderTargetIdentifier RenderTargetIdentifierXR(int32_t  id) ;

/// @brief Method RenderTargetIdentifierXR, addr 0x1825699f0, size 0x70, virtual false, abstract: false, final false
static inline void RenderTargetIdentifierXR(::by_ref<::UnityEngine::RenderTexture*>  texture, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  target) ;

/// @brief Method RenderTargetTextureNeedsUpdating, addr 0x182569a60, size 0xb0, virtual false, abstract: false, final false
static inline bool RenderTargetTextureNeedsUpdating(::UnityEngine::RenderTexture*  texture, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method RenderTextureNeedsUpdating, addr 0x182569b10, size 0xf0, virtual false, abstract: false, final false
static inline bool RenderTextureNeedsUpdating(::UnityEngine::RenderTexture*  t1, ::UnityEngine::RenderTexture*  t2) ;

/// @brief Method RenderTextureNeedsUpdating, addr 0x182569c00, size 0x50, virtual false, abstract: false, final false
static inline bool RenderTextureNeedsUpdating(::UnityEngine::RenderTextureDescriptor  t1, ::UnityEngine::RenderTextureDescriptor  t2) ;

/// @brief Method RotateAndEncapsulateXZ, addr 0x182569c50, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 RotateAndEncapsulateXZ(::UnityEngine::Vector2  size, float_t  angle) ;

/// @brief Method SafeCreateRenderTexture, addr 0x182569e20, size 0x130, virtual false, abstract: false, final false
static inline void SafeCreateRenderTexture(::StringW  name, ::by_ref<::UnityEngine::RenderTexture*>  texture, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method SafeCreateRenderTexture, addr 0x182569d20, size 0x100, virtual false, abstract: false, final false
static inline void SafeCreateRenderTexture(::by_ref<::UnityEngine::RenderTexture*>  texture, ::UnityEngine::RenderTextureDescriptor  descriptor) ;

/// @brief Method ScaleViewport, addr 0x182569f50, size 0x100, virtual false, abstract: false, final false
static inline void ScaleViewport(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RTHandle*  handle) ;

/// @brief Method SetGlobalBoolean, addr 0x18256a050, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalBoolean(int32_t  id, bool  value) ;

/// @brief Method SetGlobalKeyword, addr 0x18256a070, size 0x20, virtual false, abstract: false, final false
static inline void SetGlobalKeyword(::StringW  keyword, bool  enabled) ;

/// @brief Method SetShaderFloat, addr 0x18256a090, size 0x40, virtual false, abstract: false, final false
static inline void SetShaderFloat(::UnityEngine::Material*  material, int32_t  nameID, float_t  value, bool  global) ;

/// @brief Method SetShaderInteger, addr 0x18256a0d0, size 0x40, virtual false, abstract: false, final false
static inline void SetShaderInteger(::UnityEngine::Material*  material, int32_t  nameID, int32_t  value, bool  global) ;

/// @brief Method SetShaderVector, addr 0x18256a110, size 0x50, virtual false, abstract: false, final false
static inline void SetShaderVector(::UnityEngine::Material*  material, int32_t  nameID, ::UnityEngine::Vector4  value, bool  global) ;

/// @brief Method SiblingIndexComparison, addr 0x18256a160, size 0x20, virtual false, abstract: false, final false
static inline int32_t SiblingIndexComparison(int32_t  x, int32_t  y) ;

/// @brief Method StartsWithNoAlloc, addr 0x18256a180, size 0x90, virtual false, abstract: false, final false
static inline bool StartsWithNoAlloc(::StringW  a, ::StringW  b) ;

/// @brief Method SupportsRandomWriteOnRenderTextureFormat, addr 0x18256a210, size 0x70, virtual false, abstract: false, final false
static inline bool SupportsRandomWriteOnRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method TestPlanesAndPointsAABB, addr 0x18256a280, size 0x210, virtual false, abstract: false, final false
static inline bool TestPlanesAndPointsAABB(::ArrayW<::UnityEngine::Plane>  planes, ::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Bounds  bounds) ;

/// @brief Method TestPointsAABB, addr 0x18256a490, size 0x180, virtual false, abstract: false, final false
static inline bool TestPointsAABB(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Bounds  bounds) ;

/// @brief Method UniversalRenderCamera, addr 0x18256a980, size 0xc0, virtual false, abstract: false, final false
static inline void UniversalRenderCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, int32_t  slice) ;

/// @brief Method UniversalRenderCamera, addr 0x18256a610, size 0x370, virtual false, abstract: false, final false
static inline void UniversalRenderCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, int32_t  slice, bool  noRenderFeatures) ;

/// @brief Method UniversalRendererData, addr 0x18256aa40, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> UniversalRendererData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  asset) ;

/// @brief Method VerticallyFlipRenderTexture, addr 0x18256aa60, size 0xe0, virtual false, abstract: false, final false
static inline void VerticallyFlipRenderTexture(::UnityEngine::RenderTexture*  target, bool  force) ;

static inline ::UnityEngine::WaitForEndOfFrame* getStaticF__WaitForEndOfFrame_k__BackingField() ;

static inline ::System::Reflection::BindingFlags getStaticF_s_AnyMethod() ;

static inline ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage getStaticF_s_DataGraphicsFormatUsage() ;

static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat getStaticF_s_FallbackGraphicsFormat() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_Plane() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_Quad() ;

static inline ::System::Collections::Generic::List_1<bool>* getStaticF_s_RenderFeatureActiveStates() ;

static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest* getStaticF_s_RenderSingleCameraRequest() ;

static inline ::UnityEngine::Rendering::RenderPipeline_StandardRequest* getStaticF_s_RenderStandardRequest() ;

static inline ::System::Reflection::FieldInfo* getStaticF_s_RendererIndex() ;

static inline ::UnityEngine::Matrix4x4 getStaticF_s_ScaleMatrix() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_SphereMesh() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* getStaticF_s_Terrains() ;

/// @brief Method get_IsWebGPU, addr 0x18256adf0, size 0x20, virtual false, abstract: false, final false
static inline bool get_IsWebGPU() ;

/// @brief Method get_PlaneMesh, addr 0x18256ae10, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> get_PlaneMesh() ;

/// @brief Method get_QuadMesh, addr 0x18256aeb0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> get_QuadMesh() ;

/// @brief Method get_RequiresCustomClear, addr 0x18256af60, size 0x30, virtual false, abstract: false, final false
static inline bool get_RequiresCustomClear() ;

/// @brief Method get_SphereMesh, addr 0x18256af90, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> get_SphereMesh() ;

/// @brief Method get_WaitForEndOfFrame, addr 0x18256b040, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::WaitForEndOfFrame* get_WaitForEndOfFrame() ;

static inline void setStaticF__WaitForEndOfFrame_k__BackingField(::UnityEngine::WaitForEndOfFrame*  value) ;

static inline void setStaticF_s_AnyMethod(::System::Reflection::BindingFlags  value) ;

static inline void setStaticF_s_DataGraphicsFormatUsage(::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  value) ;

static inline void setStaticF_s_FallbackGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

static inline void setStaticF_s_Plane(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_Quad(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_RenderFeatureActiveStates(::System::Collections::Generic::List_1<bool>*  value) ;

static inline void setStaticF_s_RenderSingleCameraRequest(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*  value) ;

static inline void setStaticF_s_RenderStandardRequest(::UnityEngine::Rendering::RenderPipeline_StandardRequest*  value) ;

static inline void setStaticF_s_RendererIndex(::System::Reflection::FieldInfo*  value) ;

static inline void setStaticF_s_ScaleMatrix(::UnityEngine::Matrix4x4  value) ;

static inline void setStaticF_s_SphereMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_Terrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Helpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Helpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Helpers(Helpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Helpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Helpers(Helpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Helpers) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
