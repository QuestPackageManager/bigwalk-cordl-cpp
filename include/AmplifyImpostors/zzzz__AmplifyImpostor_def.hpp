#pragma once
// IWYU pragma private; include "AmplifyImpostors/AmplifyImpostor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AmplifyImpostors/zzzz__CutMode_def.hpp"
#include "AmplifyImpostors/zzzz__LODReplacement_def.hpp"
#include "AmplifyImpostors/zzzz__RenderPipelineInUse_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmplifyImpostor)
namespace AmplifyImpostors {
class AmplifyImpostorAsset;
}
namespace AmplifyImpostors {
struct AmplifyImpostor_RenderImpostorMode;
}
namespace AmplifyImpostors {
struct ImpostorType;
}
namespace AmplifyImpostors {
class TextureOutput;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LODGroup;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace AmplifyImpostors {
struct AmplifyImpostor_RenderImpostorMode;
}
namespace AmplifyImpostors {
class AmplifyImpostor;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode);
MARK_REF_T(::AmplifyImpostors::AmplifyImpostor*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode, "AmplifyImpostors", "AmplifyImpostor/RenderImpostorMode");
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::AmplifyImpostor*, "AmplifyImpostors", "AmplifyImpostor");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.AmplifyImpostor/RenderImpostorMode
struct CORDL_TYPE AmplifyImpostor_RenderImpostorMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AmplifyImpostor_RenderImpostorMode_Unwrapped
enum struct __AmplifyImpostor_RenderImpostorMode_Unwrapped : int32_t {
__E_Alpha = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AmplifyImpostor_RenderImpostorMode_Unwrapped () const noexcept {
return static_cast<__AmplifyImpostor_RenderImpostorMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AmplifyImpostor_RenderImpostorMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AmplifyImpostor_RenderImpostorMode(int32_t  value__) noexcept;

/// @brief Field Alpha value: I32(0)
static ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode const Alpha;

/// @brief Field Normal value: I32(1)
static ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
// Dependencies AmplifyImpostors.CutMode, AmplifyImpostors.LODReplacement, AmplifyImpostors.RenderPipelineInUse, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.RenderTexture, UnityEngine.Renderer, UnityEngine.Vector2, UnityEngine.Vector3
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.AmplifyImpostor
class CORDL_TYPE AmplifyImpostor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RenderImpostorMode = ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode;

 __declspec(property(get=get_Data, put=set_Data)) ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>  Data;

 __declspec(property(get=get_LodGroup, put=set_LodGroup)) ::UnityW<::UnityEngine::LODGroup>  LodGroup;

 __declspec(property(get=get_Renderers, put=set_Renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  Renderers;

 __declspec(property(get=get_RootTransform, put=set_RootTransform)) ::UnityW<::UnityEngine::Transform>  RootTransform;

/// @brief Field _DetailNormalMap_PID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailNormalMap_PID, put=setStaticF__DetailNormalMap_PID)) int32_t  _DetailNormalMap_PID;

/// @brief Field m_alphaGBuffers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_alphaGBuffers, put=__cordl_internal_set_m_alphaGBuffers)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  m_alphaGBuffers;

/// @brief Field m_alphaTex, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_alphaTex, put=__cordl_internal_set_m_alphaTex)) ::UnityW<::UnityEngine::Texture2D>  m_alphaTex;

/// @brief Field m_cameraInvViewProjPerFrame, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cameraInvViewProjPerFrame, put=__cordl_internal_set_m_cameraInvViewProjPerFrame)) ::ArrayW<::UnityEngine::Matrix4x4>  m_cameraInvViewProjPerFrame;

/// @brief Field m_cutMode, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cutMode, put=__cordl_internal_set_m_cutMode)) ::AmplifyImpostors::CutMode  m_cutMode;

/// @brief Field m_data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_data, put=__cordl_internal_set_m_data)) ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>  m_data;

/// @brief Field m_depthFitSize, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_depthFitSize, put=__cordl_internal_set_m_depthFitSize)) float_t  m_depthFitSize;

/// @brief Field m_folderPath, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_folderPath, put=__cordl_internal_set_m_folderPath)) ::StringW  m_folderPath;

/// @brief Field m_impostorName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_impostorName, put=__cordl_internal_set_m_impostorName)) ::StringW  m_impostorName;

/// @brief Field m_insertIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_insertIndex, put=__cordl_internal_set_m_insertIndex)) int32_t  m_insertIndex;

/// @brief Field m_lastImpostor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_lastImpostor, put=__cordl_internal_set_m_lastImpostor)) ::UnityW<::UnityEngine::GameObject>  m_lastImpostor;

/// @brief Field m_lodGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_lodGroup, put=__cordl_internal_set_m_lodGroup)) ::UnityW<::UnityEngine::LODGroup>  m_lodGroup;

/// @brief Field m_lodReplacement, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_lodReplacement, put=__cordl_internal_set_m_lodReplacement)) ::AmplifyImpostors::LODReplacement  m_lodReplacement;

/// @brief Field m_oriPos, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_oriPos, put=__cordl_internal_set_m_oriPos)) ::UnityEngine::Vector3  m_oriPos;

/// @brief Field m_oriRot, offset 0xcc, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_oriRot, put=__cordl_internal_set_m_oriRot)) ::UnityEngine::Quaternion  m_oriRot;

/// @brief Field m_oriSca, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_oriSca, put=__cordl_internal_set_m_oriSca)) ::UnityEngine::Vector3  m_oriSca;

/// @brief Field m_originalBound, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_originalBound, put=__cordl_internal_set_m_originalBound)) ::UnityEngine::Bounds  m_originalBound;

/// @brief Field m_outBuffers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_outBuffers, put=__cordl_internal_set_m_outBuffers)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  m_outBuffers;

/// @brief Field m_pixelOffset, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pixelOffset, put=__cordl_internal_set_m_pixelOffset)) ::UnityEngine::Vector2  m_pixelOffset;

/// @brief Field m_renderPipelineInUse, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_renderPipelineInUse, put=__cordl_internal_set_m_renderPipelineInUse)) ::AmplifyImpostors::RenderPipelineInUse  m_renderPipelineInUse;

/// @brief Field m_renderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_renderers, put=__cordl_internal_set_m_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  m_renderers;

/// @brief Field m_rootTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rootTransform, put=__cordl_internal_set_m_rootTransform)) ::UnityW<::UnityEngine::Transform>  m_rootTransform;

/// @brief Field m_rtGBuffers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rtGBuffers, put=__cordl_internal_set_m_rtGBuffers)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  m_rtGBuffers;

/// @brief Field m_trueDepth, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_trueDepth, put=__cordl_internal_set_m_trueDepth)) ::UnityW<::UnityEngine::RenderTexture>  m_trueDepth;

/// @brief Field m_xyFitSize, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_xyFitSize, put=__cordl_internal_set_m_xyFitSize)) float_t  m_xyFitSize;

/// @brief Method ClearAlphaBuffers, addr 0x1802d5970, size 0x90, virtual false, abstract: false, final false
inline void ClearAlphaBuffers() ;

/// @brief Method ClearBuffers, addr 0x1802d5a00, size 0xd0, virtual false, abstract: false, final false
inline void ClearBuffers() ;

/// @brief Method CopyConstantStructToArray, addr 0x1802d5ad0, size 0xf0, virtual false, abstract: false, final false
inline void CopyConstantStructToArray(::System::Object*  constants, ::ArrayW<::UnityEngine::Vector4>  array, int32_t  stride) ;

/// @brief Method CreateBlackCubemap, addr 0x1802d5bc0, size 0x180, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Cubemap> CreateBlackCubemap() ;

/// @brief Method GenerateAlphaTextures, addr 0x1802d5d40, size 0x170, virtual false, abstract: false, final false
inline void GenerateAlphaTextures(int32_t  targetAmount) ;

/// @brief Method GenerateAutomaticMesh, addr 0x1802d5eb0, size 0x5b0, virtual false, abstract: false, final false
inline void GenerateAutomaticMesh(::AmplifyImpostors::AmplifyImpostorAsset*  data) ;

/// @brief Method GenerateMesh, addr 0x1802d6460, size 0x370, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GenerateMesh(::ArrayW<::UnityEngine::Vector2>  points, ::UnityEngine::Vector3  offset, float_t  width, float_t  height, bool  invertY) ;

/// @brief Method GenerateTextures, addr 0x1802d67d0, size 0x6c0, virtual false, abstract: false, final false
inline void GenerateTextures(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  outputList, bool  standardRendering) ;

/// @brief Method GetCameraRotationMatrix, addr 0x1802d6e90, size 0x620, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetCameraRotationMatrix(::AmplifyImpostors::ImpostorType  impostorType, int32_t  hframes, int32_t  vframes, int32_t  x, int32_t  y) ;

/// @brief Method GetFrameInfo, addr 0x1802d74b0, size 0x40, virtual false, abstract: false, final false
static inline void GetFrameInfo(::AmplifyImpostors::AmplifyImpostorAsset*  data, ::by_ref<int32_t>  hframes, ::by_ref<int32_t>  vframes) ;

/// @brief Method HemiOctahedronToVector, addr 0x1802d74f0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 HemiOctahedronToVector(float_t  x, float_t  y) ;

static inline ::AmplifyImpostors::AmplifyImpostor* New_ctor() ;

/// @brief Method OctahedronToVector, addr 0x1802d75a0, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 OctahedronToVector(::UnityEngine::Vector2  oct) ;

/// @brief Method OctahedronToVector, addr 0x1802d76a0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 OctahedronToVector(float_t  x, float_t  y) ;

/// @brief Method RenderImpostor, addr 0x1802d7790, size 0x1f80, virtual false, abstract: false, final false
inline void RenderImpostor(int32_t  targetAmount, ::AmplifyImpostors::AmplifyImpostor_RenderImpostorMode  mode, bool  useMinResolution, ::UnityEngine::Shader*  customShader) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_m_alphaGBuffers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_m_alphaGBuffers() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_alphaTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_alphaTex() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_m_cameraInvViewProjPerFrame() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_m_cameraInvViewProjPerFrame() ;

constexpr ::AmplifyImpostors::CutMode const& __cordl_internal_get_m_cutMode() const;

constexpr ::AmplifyImpostors::CutMode& __cordl_internal_get_m_cutMode() ;

constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset> const& __cordl_internal_get_m_data() const;

constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>& __cordl_internal_get_m_data() ;

constexpr float_t const& __cordl_internal_get_m_depthFitSize() const;

constexpr float_t& __cordl_internal_get_m_depthFitSize() ;

constexpr ::StringW const& __cordl_internal_get_m_folderPath() const;

constexpr ::StringW& __cordl_internal_get_m_folderPath() ;

constexpr ::StringW const& __cordl_internal_get_m_impostorName() const;

constexpr ::StringW& __cordl_internal_get_m_impostorName() ;

constexpr int32_t const& __cordl_internal_get_m_insertIndex() const;

constexpr int32_t& __cordl_internal_get_m_insertIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_lastImpostor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_lastImpostor() ;

constexpr ::UnityW<::UnityEngine::LODGroup> const& __cordl_internal_get_m_lodGroup() const;

constexpr ::UnityW<::UnityEngine::LODGroup>& __cordl_internal_get_m_lodGroup() ;

constexpr ::AmplifyImpostors::LODReplacement const& __cordl_internal_get_m_lodReplacement() const;

constexpr ::AmplifyImpostors::LODReplacement& __cordl_internal_get_m_lodReplacement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_oriPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_oriPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_oriRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_oriRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_oriSca() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_oriSca() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_originalBound() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_originalBound() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_m_outBuffers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_m_outBuffers() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_pixelOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_pixelOffset() ;

constexpr ::AmplifyImpostors::RenderPipelineInUse const& __cordl_internal_get_m_renderPipelineInUse() const;

constexpr ::AmplifyImpostors::RenderPipelineInUse& __cordl_internal_get_m_renderPipelineInUse() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_m_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_m_renderers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_rootTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_rootTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_m_rtGBuffers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_m_rtGBuffers() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_trueDepth() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_trueDepth() ;

constexpr float_t const& __cordl_internal_get_m_xyFitSize() const;

constexpr float_t& __cordl_internal_get_m_xyFitSize() ;

constexpr void __cordl_internal_set_m_alphaGBuffers(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value) ;

constexpr void __cordl_internal_set_m_alphaTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_m_cameraInvViewProjPerFrame(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_m_cutMode(::AmplifyImpostors::CutMode  value) ;

constexpr void __cordl_internal_set_m_data(::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>  value) ;

constexpr void __cordl_internal_set_m_depthFitSize(float_t  value) ;

constexpr void __cordl_internal_set_m_folderPath(::StringW  value) ;

constexpr void __cordl_internal_set_m_impostorName(::StringW  value) ;

constexpr void __cordl_internal_set_m_insertIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_lastImpostor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_lodGroup(::UnityW<::UnityEngine::LODGroup>  value) ;

constexpr void __cordl_internal_set_m_lodReplacement(::AmplifyImpostors::LODReplacement  value) ;

constexpr void __cordl_internal_set_m_oriPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_oriRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_oriSca(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_originalBound(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_m_outBuffers(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value) ;

constexpr void __cordl_internal_set_m_pixelOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_renderPipelineInUse(::AmplifyImpostors::RenderPipelineInUse  value) ;

constexpr void __cordl_internal_set_m_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_m_rootTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_rtGBuffers(::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  value) ;

constexpr void __cordl_internal_set_m_trueDepth(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_xyFitSize(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9740, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__DetailNormalMap_PID() ;

/// @brief Method get_Data, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset> get_Data() ;

/// @brief Method get_LodGroup, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::LODGroup> get_LodGroup() ;

/// @brief Method get_Renderers, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Renderer>> get_Renderers() ;

/// @brief Method get_RootTransform, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RootTransform() ;

static inline void setStaticF__DetailNormalMap_PID(int32_t  value) ;

/// @brief Method set_Data, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Data(::AmplifyImpostors::AmplifyImpostorAsset*  value) ;

/// @brief Method set_LodGroup, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_LodGroup(::UnityEngine::LODGroup*  value) ;

/// @brief Method set_Renderers, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Renderers(::ArrayW<::UnityEngine::Renderer*>  value) ;

/// @brief Method set_RootTransform, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_RootTransform(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmplifyImpostor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmplifyImpostor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmplifyImpostor(AmplifyImpostor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmplifyImpostor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmplifyImpostor(AmplifyImpostor const& ) = delete;

/// @brief Field BlockSize offset 0xffffffff size 0x4
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x10000)};

/// @brief Field DilateGUID offset 0xffffffff size 0x8
static constexpr ::ConstString  DilateGUID{u"57c23892d43bc9f458360024c5985405"};

/// @brief Field GBufferToOutputGUID offset 0xffffffff size 0x8
static constexpr ::ConstString  GBufferToOutputGUID{u"9587d58ea8f1dac478d1adbf2a63d31f"};

/// @brief Field GlobalShaderVariablesQualifiedNameHDRP offset 0xffffffff size 0x8
static constexpr ::ConstString  GlobalShaderVariablesQualifiedNameHDRP{u"UnityEngine.Rendering.HighDefinition.ShaderVariablesGlobal, Unity.RenderPipelines.HighDefinition.Runtime, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null"};

/// @brief Field MinAlphaResolution offset 0xffffffff size 0x4
static constexpr int32_t  MinAlphaResolution{static_cast<int32_t>(0x100)};

/// @brief Field PackerGUID offset 0xffffffff size 0x8
static constexpr ::ConstString  PackerGUID{u"31bd3cd74692f384a916d9d7ea87710d"};

/// @brief Field ShaderBiRP offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderBiRP{u"e82933f4c0eb9ba42aab0739f48efe21"};

/// @brief Field ShaderHDRP offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderHDRP{u"175c951fec709c44fa2f26b8ab78b8dd"};

/// @brief Field ShaderOctaBiRP offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderOctaBiRP{u"572f9be5706148142b8da6e9de53acdb"};

/// @brief Field ShaderOctaHDRP offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderOctaHDRP{u"56236dc63ad9b7949b63a27f0ad180b3"};

/// @brief Field ShaderOctaURP offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderOctaURP{u"83dd8de9a5c14874884f9012def4fdcc"};

/// @brief Field ShaderURP offset 0xffffffff size 0x8
static constexpr ::ConstString  ShaderURP{u"da79d698f4bf0164e910ad798d07efdf"};

/// @brief Field StartXRotation offset 0xffffffff size 0x4
static constexpr float_t  StartXRotation{static_cast<float_t>(-90.0f)};

/// @brief Field StartYRotation offset 0xffffffff size 0x4
static constexpr float_t  StartYRotation{static_cast<float_t>(90.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20945};

/// @brief Field m_data, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AmplifyImpostors::AmplifyImpostorAsset>  ___m_data;

/// @brief Field m_rootTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_rootTransform;

/// @brief Field m_lodGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LODGroup>  ___m_lodGroup;

/// @brief Field m_renderers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___m_renderers;

/// @brief Field m_lodReplacement, offset: 0x40, size: 0x4, def value: None
 ::AmplifyImpostors::LODReplacement  ___m_lodReplacement;

/// @brief Field m_renderPipelineInUse, offset: 0x44, size: 0x4, def value: None
 ::AmplifyImpostors::RenderPipelineInUse  ___m_renderPipelineInUse;

/// @brief Field m_insertIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_insertIndex;

/// @brief Field m_lastImpostor, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_lastImpostor;

/// @brief Field m_folderPath, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_folderPath;

/// @brief Field m_impostorName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___m_impostorName;

/// @brief Field m_cutMode, offset: 0x68, size: 0x4, def value: None
 ::AmplifyImpostors::CutMode  ___m_cutMode;

/// @brief Field m_rtGBuffers, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  ___m_rtGBuffers;

/// @brief Field m_outBuffers, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  ___m_outBuffers;

/// @brief Field m_alphaGBuffers, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>  ___m_alphaGBuffers;

/// @brief Field m_trueDepth, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_trueDepth;

/// @brief Field m_alphaTex, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___m_alphaTex;

/// @brief Field m_xyFitSize, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_xyFitSize;

/// @brief Field m_depthFitSize, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_depthFitSize;

/// @brief Field m_pixelOffset, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_pixelOffset;

/// @brief Field m_originalBound, offset: 0xa8, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___m_originalBound;

/// @brief Field m_oriPos, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_oriPos;

/// @brief Field m_oriRot, offset: 0xcc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_oriRot;

/// @brief Field m_oriSca, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_oriSca;

/// @brief Field m_cameraInvViewProjPerFrame, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___m_cameraInvViewProjPerFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_rootTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_lodGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_renderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_lodReplacement) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_renderPipelineInUse) == 0x44, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_insertIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_lastImpostor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_folderPath) == 0x58, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_impostorName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_cutMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_rtGBuffers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_outBuffers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_alphaGBuffers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_trueDepth) == 0x88, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_alphaTex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_xyFitSize) == 0x98, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_depthFitSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_pixelOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_originalBound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_oriPos) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_oriRot) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_oriSca) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::AmplifyImpostors::AmplifyImpostor, ___m_cameraInvViewProjPerFrame) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::AmplifyImpostor) == 0xf0, "Size mismatch!");

} // namespace end def AmplifyImpostors
