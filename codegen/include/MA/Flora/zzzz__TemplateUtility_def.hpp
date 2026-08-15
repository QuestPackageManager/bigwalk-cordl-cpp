#pragma once
// IWYU pragma private; include "MA/Flora/TemplateUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateUtility)
namespace MA::Flora {
struct AxisAlignedBox;
}
namespace MA::Flora {
struct StaticLightingRenderMode;
}
namespace MA::Flora {
struct TemplateSourceInfo;
}
namespace MA::Flora {
class TemplateUtility_FrameCache;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LOD;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace MA::Flora {
class TemplateUtility;
}
namespace MA::Flora {
class TemplateUtility_FrameCache;
}
// Write type traits
MARK_REF_T(::MA::Flora::TemplateUtility*);
MARK_REF_T(::MA::Flora::TemplateUtility_FrameCache*);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateUtility*, "MA.Flora", "TemplateUtility");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateUtility_FrameCache*, "MA.Flora", "TemplateUtility/FrameCache");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TemplateUtility/FrameCache
class CORDL_TYPE TemplateUtility_FrameCache : public ::System::Object {
public:
// Declarations
/// @brief Field FirstLODMeshRendererCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FirstLODMeshRendererCache, put=setStaticF_FirstLODMeshRendererCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>*  FirstLODMeshRendererCache;

/// @brief Field LODCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LODCache, put=setStaticF_LODCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>*  LODCache;

/// @brief Field LocalBoundsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LocalBoundsCache, put=setStaticF_LocalBoundsCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*  LocalBoundsCache;

/// @brief Field LowerBoundsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LowerBoundsCache, put=setStaticF_LowerBoundsCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>*  LowerBoundsCache;

/// @brief Field TemplateInfoCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TemplateInfoCache, put=setStaticF_TemplateInfoCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>*  TemplateInfoCache;

/// @brief Field WorldBoundsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WorldBoundsCache, put=setStaticF_WorldBoundsCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*  WorldBoundsCache;

/// @brief Method Clear, addr 0x1814a73a0, size 0xf0, virtual false, abstract: false, final false
static inline void Clear() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>* getStaticF_FirstLODMeshRendererCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>* getStaticF_LODCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>* getStaticF_LocalBoundsCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>* getStaticF_LowerBoundsCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>* getStaticF_TemplateInfoCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>* getStaticF_WorldBoundsCache() ;

static inline void setStaticF_FirstLODMeshRendererCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>*  value) ;

static inline void setStaticF_LODCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>*  value) ;

static inline void setStaticF_LocalBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*  value) ;

static inline void setStaticF_LowerBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>*  value) ;

static inline void setStaticF_TemplateInfoCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>*  value) ;

static inline void setStaticF_WorldBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateUtility_FrameCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateUtility_FrameCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateUtility_FrameCache(TemplateUtility_FrameCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateUtility_FrameCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateUtility_FrameCache(TemplateUtility_FrameCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TemplateUtility_FrameCache) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TemplateUtility
class CORDL_TYPE TemplateUtility : public ::System::Object {
public:
// Declarations
using FrameCache = ::MA::Flora::TemplateUtility_FrameCache;

/// @brief Field MeshBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MeshBuffer, put=setStaticF_MeshBuffer)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  MeshBuffer;

/// @brief Field MeshRendererBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MeshRendererBuffer, put=setStaticF_MeshRendererBuffer)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  MeshRendererBuffer;

/// @brief Method CalculateLowestBoundingSphere, addr 0x1814aab30, size 0x880, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundingSphere CalculateLowestBoundingSphere(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method ComputeTemplateSourceInfo, addr 0x1814ab3b0, size 0x1080, virtual false, abstract: false, final false
static inline ::MA::Flora::TemplateSourceInfo ComputeTemplateSourceInfo(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetLODs, addr 0x1814ac430, size 0x3e0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LOD> GetLODs(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetMeshRenderersForFirstLOD, addr 0x1814ac810, size 0x220, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> GetMeshRenderersForFirstLOD(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetRendererLocalBounds, addr 0x1814aca30, size 0x1b0, virtual false, abstract: false, final false
static inline ::MA::Flora::AxisAlignedBox GetRendererLocalBounds(::UnityEngine::Renderer*  renderer) ;

/// @brief Method GetTransformPositionInRootSpace, addr 0x1814acbe0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetTransformPositionInRootSpace(::UnityEngine::Transform*  root, ::UnityEngine::Transform*  target) ;

/// @brief Method GetTransformToRootSpace, addr 0x1814acc60, size 0x4e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetTransformToRootSpace(::UnityEngine::Transform*  root, ::UnityEngine::Transform*  target) ;

/// @brief Method NextFrame, addr 0x1814a73a0, size 0xf0, virtual false, abstract: false, final false
static inline void NextFrame() ;

/// @brief Method TryGetInstanceRendererSupportError, addr 0x1814ad140, size 0x330, virtual false, abstract: false, final false
static inline bool TryGetInstanceRendererSupportError(::UnityEngine::GameObject*  gameObject, ::by_ref<::StringW>  error) ;

/// @brief Method TryGetStableRendererLocalBounds, addr 0x1814ad470, size 0x330, virtual false, abstract: false, final false
static inline bool TryGetStableRendererLocalBounds(::UnityEngine::Renderer*  renderer, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds) ;

/// @brief Method ValidateStaticLightingConfiguration, addr 0x1814ad7a0, size 0x120, virtual false, abstract: false, final false
static inline bool ValidateStaticLightingConfiguration(::by_ref<::MA::Flora::TemplateSourceInfo>  renderInfo, ::MA::Flora::StaticLightingRenderMode  staticLightingMode, int32_t  rendererLightmapIndex, ::UnityEngine::Vector4  rendererLightmapScaleOffset, ::by_ref<bool>  hasStaticLightingMode, ::by_ref<::MA::Flora::StaticLightingRenderMode>  rootStaticLightingMode, ::by_ref<bool>  hasLightmapBinding, ::by_ref<int32_t>  rootLightmapIndex, ::by_ref<::Unity::Mathematics::float4>  rootLightmapScaleOffset) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* getStaticF_MeshBuffer() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* getStaticF_MeshRendererBuffer() ;

static inline void setStaticF_MeshBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

static inline void setStaticF_MeshRendererBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateUtility(TemplateUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateUtility(TemplateUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13089};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TemplateUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
