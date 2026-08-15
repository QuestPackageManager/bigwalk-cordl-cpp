#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/AdditionalLightsShadowCasterPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowCasterPass)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct AdditionalLightsShadowCasterPass_CachedLightShadowState;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct AdditionalLightsShadowCasterPass_ShadowBlitInfo;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct AdditionalLightsShadowCasterPass_SlotPosition;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass___c;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct AdditionalLightsShadowCasterPass_CachedLightShadowState;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct AdditionalLightsShadowCasterPass_ShadowBlitInfo;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct AdditionalLightsShadowCasterPass_SlotPosition;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/AdditionalShadowsConstantBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/CachedLightShadowState");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/ShadowBlitInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass/SlotPosition");
// Dependencies UnityEngine.Matrix4x4
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/CachedLightShadowState
struct CORDL_TYPE AdditionalLightsShadowCasterPass_CachedLightShadowState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass_CachedLightShadowState() ;

// Ctor Parameters [CppParam { name: "lastLocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "lastFrameRendered", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastFrameSeen", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isDirty", ty: "bool", modifiers: "", def_value: None }]
constexpr AdditionalLightsShadowCasterPass_CachedLightShadowState(::UnityEngine::Matrix4x4  lastLocalToWorldMatrix, int32_t  lastFrameRendered, int32_t  lastFrameSeen, bool  isDirty) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4c};

/// @brief Field lastLocalToWorldMatrix, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  lastLocalToWorldMatrix;

/// @brief Field lastFrameRendered, offset: 0x40, size: 0x4, def value: None
 int32_t  lastFrameRendered;

/// @brief Field lastFrameSeen, offset: 0x44, size: 0x4, def value: None
 int32_t  lastFrameSeen;

/// @brief Field isDirty, offset: 0x48, size: 0x1, def value: None
 bool  isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState, lastLocalToWorldMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState, lastFrameRendered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState, lastFrameSeen) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState, isDirty) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState) == 0x4c, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
// Dependencies 
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/SlotPosition
struct CORDL_TYPE AdditionalLightsShadowCasterPass_SlotPosition {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass_SlotPosition() ;

// Ctor Parameters [CppParam { name: "offsetX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offsetY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AdditionalLightsShadowCasterPass_SlotPosition(int32_t  offsetX, int32_t  offsetY, int32_t  resolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12687};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field offsetX, offset: 0x0, size: 0x4, def value: None
 int32_t  offsetX;

/// @brief Field offsetY, offset: 0x4, size: 0x4, def value: None
 int32_t  offsetY;

/// @brief Field resolution, offset: 0x8, size: 0x4, def value: None
 int32_t  resolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition, offsetX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition, offsetY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition, resolution) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
// Dependencies 
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/ShadowBlitInfo
struct CORDL_TYPE AdditionalLightsShadowCasterPass_ShadowBlitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass_ShadowBlitInfo() ;

// Ctor Parameters [CppParam { name: "srcOffsetX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "srcOffsetY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dstOffsetX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dstOffsetY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AdditionalLightsShadowCasterPass_ShadowBlitInfo(int32_t  srcOffsetX, int32_t  srcOffsetY, int32_t  dstOffsetX, int32_t  dstOffsetY, int32_t  resolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field srcOffsetX, offset: 0x0, size: 0x4, def value: None
 int32_t  srcOffsetX;

/// @brief Field srcOffsetY, offset: 0x4, size: 0x4, def value: None
 int32_t  srcOffsetY;

/// @brief Field dstOffsetX, offset: 0x8, size: 0x4, def value: None
 int32_t  dstOffsetX;

/// @brief Field dstOffsetY, offset: 0xc, size: 0x4, def value: None
 int32_t  dstOffsetY;

/// @brief Field resolution, offset: 0x10, size: 0x4, def value: None
 int32_t  resolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo, srcOffsetX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo, srcOffsetY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo, dstOffsetX) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo, dstOffsetY) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo, resolution) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/AdditionalShadowsConstantBuffer
class CORDL_TYPE AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field _AdditionalLightsShadowmapID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalLightsShadowmapID, put=setStaticF__AdditionalLightsShadowmapID)) int32_t  _AdditionalLightsShadowmapID;

/// @brief Field _AdditionalLightsWorldToShadow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalLightsWorldToShadow, put=setStaticF__AdditionalLightsWorldToShadow)) int32_t  _AdditionalLightsWorldToShadow;

/// @brief Field _AdditionalLightsWorldToShadow_SSBO, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalLightsWorldToShadow_SSBO, put=setStaticF__AdditionalLightsWorldToShadow_SSBO)) int32_t  _AdditionalLightsWorldToShadow_SSBO;

/// @brief Field _AdditionalShadowFadeParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalShadowFadeParams, put=setStaticF__AdditionalShadowFadeParams)) int32_t  _AdditionalShadowFadeParams;

/// @brief Field _AdditionalShadowOffset0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalShadowOffset0, put=setStaticF__AdditionalShadowOffset0)) int32_t  _AdditionalShadowOffset0;

/// @brief Field _AdditionalShadowOffset1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalShadowOffset1, put=setStaticF__AdditionalShadowOffset1)) int32_t  _AdditionalShadowOffset1;

/// @brief Field _AdditionalShadowParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalShadowParams, put=setStaticF__AdditionalShadowParams)) int32_t  _AdditionalShadowParams;

/// @brief Field _AdditionalShadowParams_SSBO, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalShadowParams_SSBO, put=setStaticF__AdditionalShadowParams_SSBO)) int32_t  _AdditionalShadowParams_SSBO;

/// @brief Field _AdditionalShadowmapSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdditionalShadowmapSize, put=setStaticF__AdditionalShadowmapSize)) int32_t  _AdditionalShadowmapSize;

static inline int32_t getStaticF__AdditionalLightsShadowmapID() ;

static inline int32_t getStaticF__AdditionalLightsWorldToShadow() ;

static inline int32_t getStaticF__AdditionalLightsWorldToShadow_SSBO() ;

static inline int32_t getStaticF__AdditionalShadowFadeParams() ;

static inline int32_t getStaticF__AdditionalShadowOffset0() ;

static inline int32_t getStaticF__AdditionalShadowOffset1() ;

static inline int32_t getStaticF__AdditionalShadowParams() ;

static inline int32_t getStaticF__AdditionalShadowParams_SSBO() ;

static inline int32_t getStaticF__AdditionalShadowmapSize() ;

static inline void setStaticF__AdditionalLightsShadowmapID(int32_t  value) ;

static inline void setStaticF__AdditionalLightsWorldToShadow(int32_t  value) ;

static inline void setStaticF__AdditionalLightsWorldToShadow_SSBO(int32_t  value) ;

static inline void setStaticF__AdditionalShadowFadeParams(int32_t  value) ;

static inline void setStaticF__AdditionalShadowOffset0(int32_t  value) ;

static inline void setStaticF__AdditionalShadowOffset1(int32_t  value) ;

static inline void setStaticF__AdditionalShadowParams(int32_t  value) ;

static inline void setStaticF__AdditionalShadowParams_SSBO(int32_t  value) ;

static inline void setStaticF__AdditionalShadowmapSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer(AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer(AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RendererList, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/PassData
class CORDL_TYPE AdditionalLightsShadowCasterPass_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field allocatedShadowAtlasSize, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_allocatedShadowAtlasSize, put=__cordl_internal_set_allocatedShadowAtlasSize)) ::UnityEngine::Vector2Int  allocatedShadowAtlasSize;

/// @brief Field emptyShadowmap, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_emptyShadowmap, put=__cordl_internal_set_emptyShadowmap)) bool  emptyShadowmap;

/// @brief Field lightData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightData, put=__cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData;

/// @brief Field pass, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_pass, put=__cordl_internal_set_pass)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  pass;

/// @brief Field setKeywordForEmptyShadowmap, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_setKeywordForEmptyShadowmap, put=__cordl_internal_set_setKeywordForEmptyShadowmap)) bool  setKeywordForEmptyShadowmap;

/// @brief Field shadowData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadowData, put=__cordl_internal_set_shadowData)) ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData;

/// @brief Field shadowRendererLists, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadowRendererLists, put=__cordl_internal_set_shadowRendererLists)) ::ArrayW<::UnityEngine::Rendering::RendererList>  shadowRendererLists;

/// @brief Field shadowRendererListsHdl, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadowRendererListsHdl, put=__cordl_internal_set_shadowRendererListsHdl)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>  shadowRendererListsHdl;

/// @brief Field shadowmapID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowmapID, put=__cordl_internal_set_shadowmapID)) int32_t  shadowmapID;

/// @brief Field shadowmapTexture, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_shadowmapTexture, put=__cordl_internal_set_shadowmapTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  shadowmapTexture;

/// @brief Field stripShadowsOffVariants, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_stripShadowsOffVariants, put=__cordl_internal_set_stripShadowsOffVariants)) bool  stripShadowsOffVariants;

/// @brief Field useStructuredBuffer, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_useStructuredBuffer, put=__cordl_internal_set_useStructuredBuffer)) bool  useStructuredBuffer;

/// @brief Field viewMatrix, offset 0x18, size 0x40 
 __declspec(property(get=__cordl_internal_get_viewMatrix, put=__cordl_internal_set_viewMatrix)) ::UnityEngine::Matrix4x4  viewMatrix;

static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* New_ctor() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_allocatedShadowAtlasSize() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_allocatedShadowAtlasSize() ;

constexpr bool const& __cordl_internal_get_emptyShadowmap() const;

constexpr bool& __cordl_internal_get_emptyShadowmap() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData() ;

constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& __cordl_internal_get_pass() const;

constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_pass() ;

constexpr bool const& __cordl_internal_get_setKeywordForEmptyShadowmap() const;

constexpr bool& __cordl_internal_get_setKeywordForEmptyShadowmap() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& __cordl_internal_get_shadowData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& __cordl_internal_get_shadowData() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RendererList> const& __cordl_internal_get_shadowRendererLists() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RendererList>& __cordl_internal_get_shadowRendererLists() ;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> const& __cordl_internal_get_shadowRendererListsHdl() const;

constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>& __cordl_internal_get_shadowRendererListsHdl() ;

constexpr int32_t const& __cordl_internal_get_shadowmapID() const;

constexpr int32_t& __cordl_internal_get_shadowmapID() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_shadowmapTexture() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_shadowmapTexture() ;

constexpr bool const& __cordl_internal_get_stripShadowsOffVariants() const;

constexpr bool& __cordl_internal_get_stripShadowsOffVariants() ;

constexpr bool const& __cordl_internal_get_useStructuredBuffer() const;

constexpr bool& __cordl_internal_get_useStructuredBuffer() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_viewMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_viewMatrix() ;

constexpr void __cordl_internal_set_allocatedShadowAtlasSize(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_emptyShadowmap(bool  value) ;

constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData*  value) ;

constexpr void __cordl_internal_set_pass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  value) ;

constexpr void __cordl_internal_set_setKeywordForEmptyShadowmap(bool  value) ;

constexpr void __cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData*  value) ;

constexpr void __cordl_internal_set_shadowRendererLists(::ArrayW<::UnityEngine::Rendering::RendererList>  value) ;

constexpr void __cordl_internal_set_shadowRendererListsHdl(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>  value) ;

constexpr void __cordl_internal_set_shadowmapID(int32_t  value) ;

constexpr void __cordl_internal_set_shadowmapTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_stripShadowsOffVariants(bool  value) ;

constexpr void __cordl_internal_set_useStructuredBuffer(bool  value) ;

constexpr void __cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x18215bb90, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditionalLightsShadowCasterPass_PassData(AdditionalLightsShadowCasterPass_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditionalLightsShadowCasterPass_PassData(AdditionalLightsShadowCasterPass_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12690};

/// @brief Field shadowmapID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___shadowmapID;

/// @brief Field emptyShadowmap, offset: 0x14, size: 0x1, def value: None
 bool  ___emptyShadowmap;

/// @brief Field setKeywordForEmptyShadowmap, offset: 0x15, size: 0x1, def value: None
 bool  ___setKeywordForEmptyShadowmap;

/// @brief Field useStructuredBuffer, offset: 0x16, size: 0x1, def value: None
 bool  ___useStructuredBuffer;

/// @brief Field stripShadowsOffVariants, offset: 0x17, size: 0x1, def value: None
 bool  ___stripShadowsOffVariants;

/// @brief Field viewMatrix, offset: 0x18, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___viewMatrix;

/// @brief Field allocatedShadowAtlasSize, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___allocatedShadowAtlasSize;

/// @brief Field shadowmapTexture, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___shadowmapTexture;

/// @brief Field lightData, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalLightData*  ___lightData;

/// @brief Field shadowData, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalShadowData*  ___shadowData;

/// @brief Field pass, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*  ___pass;

/// @brief Field shadowRendererLists, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RendererList>  ___shadowRendererLists;

/// @brief Field shadowRendererListsHdl, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>  ___shadowRendererListsHdl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowmapID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___emptyShadowmap) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___setKeywordForEmptyShadowmap) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___useStructuredBuffer) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___stripShadowsOffVariants) == 0x17, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___viewMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___allocatedShadowAtlasSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowmapTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___lightData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___pass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowRendererLists) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData, ___shadowRendererListsHdl) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass/<>c
class CORDL_TYPE AdditionalLightsShadowCasterPass___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*  __9;

/// @brief Field <>9__100_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__100_0, put=setStaticF___9__100_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__100_0;

/// @brief Field <>9__94_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__94_0, put=setStaticF___9__94_0)) ::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  __9__94_0;

static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* New_ctor() ;

/// @brief Method <DetermineLightsToUpdate>b__94_0, addr 0x18045a3b0, size 0x20, virtual false, abstract: false, final false
inline int32_t _DetermineLightsToUpdate_b__94_0(::System::ValueTuple_3<int32_t,int32_t,int32_t>  tuple, ::System::ValueTuple_3<int32_t,int32_t,int32_t>  valueTuple) ;

/// @brief Method <Render>b__100_0, addr 0x18215c5b0, size 0x190, virtual false, abstract: false, final false
inline void _Render_b__100_0(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__100_0() ;

static inline ::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>* getStaticF___9__94_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*  value) ;

static inline void setStaticF___9__100_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__94_0(::System::Comparison_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditionalLightsShadowCasterPass___c(AdditionalLightsShadowCasterPass___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditionalLightsShadowCasterPass___c(AdditionalLightsShadowCasterPass___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Matrix4x4, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Rendering.Universal.ShadowSliceData, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass
class CORDL_TYPE AdditionalLightsShadowCasterPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using AdditionalShadowsConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer;

using CachedLightShadowState = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState;

using PassData = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData;

using ShadowBlitInfo = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo;

using SlotPosition = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition;

using __c = ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c;

 __declspec(property(get=get_EnableShadowCaching, put=set_EnableShadowCaching)) bool  EnableShadowCaching;

 __declspec(property(get=get_MaxPriorityLightUpdatesPerFrame, put=set_MaxPriorityLightUpdatesPerFrame)) int32_t  MaxPriorityLightUpdatesPerFrame;

 __declspec(property(get=get_MaxShadowUpdatesPerFrame, put=set_MaxShadowUpdatesPerFrame)) int32_t  MaxShadowUpdatesPerFrame;

/// @brief Field c_DefaultShadowParams, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_c_DefaultShadowParams, put=setStaticF_c_DefaultShadowParams)) ::UnityEngine::Vector4  c_DefaultShadowParams;

/// @brief Field isAdditionalShadowParamsDirty, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isAdditionalShadowParamsDirty, put=setStaticF_isAdditionalShadowParamsDirty)) bool  isAdditionalShadowParamsDirty;

/// @brief Field m_AdditionalLightIndexToShadowParams, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightIndexToShadowParams, put=__cordl_internal_set_m_AdditionalLightIndexToShadowParams)) ::ArrayW<::UnityEngine::Vector4>  m_AdditionalLightIndexToShadowParams;

/// @brief Field m_AdditionalLightIndexToVisibleLightIndex, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex, put=__cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex)) ::ArrayW<int16_t>  m_AdditionalLightIndexToVisibleLightIndex;

/// @brief Field m_AdditionalLightShadowDescriptor, offset 0x158, size 0x34 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightShadowDescriptor, put=__cordl_internal_set_m_AdditionalLightShadowDescriptor)) ::UnityEngine::RenderTextureDescriptor  m_AdditionalLightShadowDescriptor;

/// @brief Field m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, put=__cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix)) ::ArrayW<::UnityEngine::Matrix4x4>  m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

/// @brief Field m_AdditionalLightsShadowSlices, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightsShadowSlices, put=__cordl_internal_set_m_AdditionalLightsShadowSlices)) ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData>  m_AdditionalLightsShadowSlices;

/// @brief Field m_AdditionalLightsShadowmapHandle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightsShadowmapHandle, put=__cordl_internal_set_m_AdditionalLightsShadowmapHandle)) ::UnityEngine::Rendering::RTHandle*  m_AdditionalLightsShadowmapHandle;

/// @brief Field m_AdditionalShadowsBufferId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_AdditionalShadowsBufferId, put=setStaticF_m_AdditionalShadowsBufferId)) int32_t  m_AdditionalShadowsBufferId;

/// @brief Field m_AdditionalShadowsIndicesId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_AdditionalShadowsIndicesId, put=setStaticF_m_AdditionalShadowsIndicesId)) int32_t  m_AdditionalShadowsIndicesId;

/// @brief Field m_BlitsExecutedThisFrame, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlitsExecutedThisFrame, put=__cordl_internal_set_m_BlitsExecutedThisFrame)) bool  m_BlitsExecutedThisFrame;

/// @brief Field m_CachedStaleKeys, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedStaleKeys, put=__cordl_internal_set_m_CachedStaleKeys)) ::System::Collections::Generic::List_1<int32_t>*  m_CachedStaleKeys;

/// @brief Field m_CascadeBorder, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CascadeBorder, put=__cordl_internal_set_m_CascadeBorder)) float_t  m_CascadeBorder;

/// @brief Field m_CreateEmptyShadowmap, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CreateEmptyShadowmap, put=__cordl_internal_set_m_CreateEmptyShadowmap)) bool  m_CreateEmptyShadowmap;

/// @brief Field m_EmptyShadowmapNeedsClear, offset 0xf6, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EmptyShadowmapNeedsClear, put=__cordl_internal_set_m_EmptyShadowmapNeedsClear)) bool  m_EmptyShadowmapNeedsClear;

/// @brief Field m_EnableShadowCaching, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableShadowCaching, put=__cordl_internal_set_m_EnableShadowCaching)) bool  m_EnableShadowCaching;

/// @brief Field m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, put=__cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex)) ::System::Collections::Generic::List_1<uint8_t>*  m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

/// @brief Field m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall, put=setStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall)) bool  m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall;

/// @brief Field m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall, put=setStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall)) bool  m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall;

/// @brief Field m_IssuedMessageAboutRemovedShadowSlices, offset 0xfb, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices, put=__cordl_internal_set_m_IssuedMessageAboutRemovedShadowSlices)) bool  m_IssuedMessageAboutRemovedShadowSlices;

/// @brief Field m_IssuedMessageAboutShadowMapsRescale, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale, put=__cordl_internal_set_m_IssuedMessageAboutShadowMapsRescale)) bool  m_IssuedMessageAboutShadowMapsRescale;

/// @brief Field m_IssuedMessageAboutShadowMapsTooBig, offset 0xfa, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig, put=__cordl_internal_set_m_IssuedMessageAboutShadowMapsTooBig)) bool  m_IssuedMessageAboutShadowMapsTooBig;

/// @brief Field m_IssuedMessageAboutShadowSlicesTooMany, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany, put=__cordl_internal_set_m_IssuedMessageAboutShadowSlicesTooMany)) bool  m_IssuedMessageAboutShadowSlicesTooMany;

/// @brief Field m_LastAtlasHeight, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastAtlasHeight, put=__cordl_internal_set_m_LastAtlasHeight)) int32_t  m_LastAtlasHeight;

/// @brief Field m_LastAtlasWidth, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastAtlasWidth, put=__cordl_internal_set_m_LastAtlasWidth)) int32_t  m_LastAtlasWidth;

/// @brief Field m_LastFrameSlotToLightInstanceID, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastFrameSlotToLightInstanceID, put=__cordl_internal_set_m_LastFrameSlotToLightInstanceID)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  m_LastFrameSlotToLightInstanceID;

/// @brief Field m_LastFrameSlotToPosition, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastFrameSlotToPosition, put=__cordl_internal_set_m_LastFrameSlotToPosition)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  m_LastFrameSlotToPosition;

/// @brief Field m_LastSlotCount, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastSlotCount, put=__cordl_internal_set_m_LastSlotCount)) int32_t  m_LastSlotCount;

/// @brief Field m_LightShadowStateCache, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LightShadowStateCache, put=__cordl_internal_set_m_LightShadowStateCache)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>*  m_LightShadowStateCache;

/// @brief Field m_LightsNeedingBlitFallback, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LightsNeedingBlitFallback, put=__cordl_internal_set_m_LightsNeedingBlitFallback)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_LightsNeedingBlitFallback;

/// @brief Field m_LightsToUpdateThisFrame, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LightsToUpdateThisFrame, put=__cordl_internal_set_m_LightsToUpdateThisFrame)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_LightsToUpdateThisFrame;

/// @brief Field m_MaxPriorityLightUpdatesPerFrame, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxPriorityLightUpdatesPerFrame, put=__cordl_internal_set_m_MaxPriorityLightUpdatesPerFrame)) int32_t  m_MaxPriorityLightUpdatesPerFrame;

/// @brief Field m_MaxShadowDistanceSq, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxShadowDistanceSq, put=__cordl_internal_set_m_MaxShadowDistanceSq)) float_t  m_MaxShadowDistanceSq;

/// @brief Field m_MaxShadowUpdatesPerFrame, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxShadowUpdatesPerFrame, put=__cordl_internal_set_m_MaxShadowUpdatesPerFrame)) int32_t  m_MaxShadowUpdatesPerFrame;

/// @brief Field m_NeedFullAtlasClear, offset 0xf7, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NeedFullAtlasClear, put=__cordl_internal_set_m_NeedFullAtlasClear)) bool  m_NeedFullAtlasClear;

/// @brief Field m_PriorityLightsTemp, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PriorityLightsTemp, put=__cordl_internal_set_m_PriorityLightsTemp)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  m_PriorityLightsTemp;

/// @brief Field m_PriorityRoundRobinIndex, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PriorityRoundRobinIndex, put=__cordl_internal_set_m_PriorityRoundRobinIndex)) int32_t  m_PriorityRoundRobinIndex;

/// @brief Field m_ProcessedLightsForUpdate, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProcessedLightsForUpdate, put=__cordl_internal_set_m_ProcessedLightsForUpdate)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_ProcessedLightsForUpdate;

/// @brief Field m_ProcessedPriorityLights, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProcessedPriorityLights, put=__cordl_internal_set_m_ProcessedPriorityLights)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_ProcessedPriorityLights;

/// @brief Field m_ProfilingSetupSampler, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProfilingSetupSampler, put=__cordl_internal_set_m_ProfilingSetupSampler)) ::UnityEngine::Rendering::ProfilingSampler*  m_ProfilingSetupSampler;

/// @brief Field m_RoundRobinStartIndex, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RoundRobinStartIndex, put=__cordl_internal_set_m_RoundRobinStartIndex)) int32_t  m_RoundRobinStartIndex;

/// @brief Field m_SetKeywordForEmptyShadowmap, offset 0xf5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SetKeywordForEmptyShadowmap, put=__cordl_internal_set_m_SetKeywordForEmptyShadowmap)) bool  m_SetKeywordForEmptyShadowmap;

/// @brief Field m_ShadowBlitsThisFrame, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShadowBlitsThisFrame, put=__cordl_internal_set_m_ShadowBlitsThisFrame)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>*  m_ShadowBlitsThisFrame;

/// @brief Field m_ShadowRequestsHashes, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShadowRequestsHashes, put=__cordl_internal_set_m_ShadowRequestsHashes)) ::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>*  m_ShadowRequestsHashes;

/// @brief Field m_ShadowSliceToAdditionalLightIndex, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShadowSliceToAdditionalLightIndex, put=__cordl_internal_set_m_ShadowSliceToAdditionalLightIndex)) ::System::Collections::Generic::List_1<int16_t>*  m_ShadowSliceToAdditionalLightIndex;

/// @brief Field m_SlotToLightInstanceID, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SlotToLightInstanceID, put=__cordl_internal_set_m_SlotToLightInstanceID)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  m_SlotToLightInstanceID;

/// @brief Field m_SlotToPosition, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SlotToPosition, put=__cordl_internal_set_m_SlotToPosition)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  m_SlotToPosition;

/// @brief Field m_UseStructuredBuffer, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseStructuredBuffer, put=__cordl_internal_set_m_UseStructuredBuffer)) bool  m_UseStructuredBuffer;

/// @brief Field m_VisibleLightIndexToAdditionalLightIndex, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex, put=__cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex)) ::ArrayW<int16_t>  m_VisibleLightIndexToAdditionalLightIndex;

/// @brief Field m_VisibleLightIndexToIsCastingShadows, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisibleLightIndexToIsCastingShadows, put=__cordl_internal_set_m_VisibleLightIndexToIsCastingShadows)) ::ArrayW<bool>  m_VisibleLightIndexToIsCastingShadows;

/// @brief Field renderTargetHeight, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderTargetHeight, put=__cordl_internal_set_renderTargetHeight)) int32_t  renderTargetHeight;

/// @brief Field renderTargetWidth, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderTargetWidth, put=__cordl_internal_set_renderTargetWidth)) int32_t  renderTargetWidth;

/// @brief Field s_EmptyAdditionalLightIndexToShadowParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EmptyAdditionalLightIndexToShadowParams, put=setStaticF_s_EmptyAdditionalLightIndexToShadowParams)) ::ArrayW<::UnityEngine::Vector4>  s_EmptyAdditionalLightIndexToShadowParams;

/// @brief Field s_EmptyAdditionalShadowFadeParams, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_EmptyAdditionalShadowFadeParams, put=setStaticF_s_EmptyAdditionalShadowFadeParams)) ::UnityEngine::Vector4  s_EmptyAdditionalShadowFadeParams;

/// @brief Method AnyAdditionalLightHasMixedShadows, addr 0x182148e80, size 0x180, virtual false, abstract: false, final false
inline bool AnyAdditionalLightHasMixedShadows(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData) ;

/// @brief Method CalcGuardAngle, addr 0x182149000, size 0x90, virtual false, abstract: false, final false
static inline float_t CalcGuardAngle(float_t  frustumAngleInDegrees, float_t  guardBandSizeInTexels, float_t  sliceResolutionInTexels) ;

/// @brief Method Clear, addr 0x182149090, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ComputeShadowRequestHash, addr 0x1821490b0, size 0x2f0, virtual false, abstract: false, final false
inline uint64_t ComputeShadowRequestHash(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData) ;

/// @brief Method Configure, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor) ;

/// @brief Method DetermineLightsToUpdate, addr 0x1821493a0, size 0x11c0, virtual false, abstract: false, final false
inline void DetermineLightsToUpdate(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>  visibleLights, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, int32_t  totalShadowSlicesCount) ;

/// @brief Method Dispose, addr 0x1820f8a70, size 0x20, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Execute, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method ExecuteShadowBlits, addr 0x18214a560, size 0x2f0, virtual false, abstract: false, final false
inline void ExecuteShadowBlits(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method GetLightTypeIdentifierForShadowParams, addr 0x18214a850, size 0x20, virtual false, abstract: false, final false
inline float_t GetLightTypeIdentifierForShadowParams(::UnityEngine::LightType  lightType) ;

/// @brief Method GetPointLightShadowFrustumFovBiasInDegrees, addr 0x18214a870, size 0x270, virtual false, abstract: false, final false
static inline float_t GetPointLightShadowFrustumFovBiasInDegrees(int32_t  shadowSliceResolution, bool  shadowFiltering) ;

/// @brief Method GetShadowLightIndexFromLightIndex, addr 0x18214aae0, size 0x40, virtual false, abstract: false, final false
inline int32_t GetShadowLightIndexFromLightIndex(int32_t  visibleLightIndex) ;

/// @brief Method InitPassData, addr 0x18214ab20, size 0xf0, virtual false, abstract: false, final false
inline void InitPassData(::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>  passData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData) ;

/// @brief Method InitRendererLists, addr 0x18214ac10, size 0x240, virtual false, abstract: false, final false
inline void InitRendererLists(::by_ref<::UnityEngine::Rendering::CullingResults>  cullResults, ::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>  passData, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  useRenderGraph) ;

/// @brief Method InvalidateShadowCache, addr 0x18214ae50, size 0x80, virtual false, abstract: false, final false
inline void InvalidateShadowCache() ;

/// @brief Method MatrixApproximatelyEqual, addr 0x18214aed0, size 0x90, virtual false, abstract: false, final false
static inline bool MatrixApproximatelyEqual(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  threshold) ;

static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt) ;

/// @brief Method RegionsOverlap, addr 0x18214af60, size 0x60, virtual false, abstract: false, final false
static inline bool RegionsOverlap(int32_t  x1, int32_t  y1, int32_t  size1, int32_t  x2, int32_t  y2, int32_t  size2) ;

/// @brief Method Render, addr 0x18214bd40, size 0x8e0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method RenderAdditionalShadowmapAtlas, addr 0x18214afc0, size 0xd80, virtual false, abstract: false, final false
inline void RenderAdditionalShadowmapAtlas(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>  data, bool  useRenderGraph) ;

/// @brief Method ResolutionLog2ForHash, addr 0x18214c620, size 0x50, virtual false, abstract: false, final false
inline uint64_t ResolutionLog2ForHash(int32_t  resolution) ;

/// @brief Method SetShadowParamsForEmptyShadowmap, addr 0x18214c670, size 0x140, virtual false, abstract: false, final false
static inline void SetShadowParamsForEmptyShadowmap(::UnityEngine::Rendering::RasterCommandBuffer*  rasterCommandBuffer) ;

/// @brief Method Setup, addr 0x18214cf90, size 0x1bd0, virtual false, abstract: false, final false
inline bool Setup(::UnityEngine::Rendering::Universal::UniversalRenderingData*  renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData) ;

/// @brief Method Setup, addr 0x18214eb60, size 0xa0, virtual false, abstract: false, final false
inline bool Setup(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method SetupAdditionalLightsShadowReceiverConstants, addr 0x18214c7b0, size 0x320, virtual false, abstract: false, final false
inline void SetupAdditionalLightsShadowReceiverConstants(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector2Int  allocatedShadowAtlasSize, bool  useStructuredBuffer, bool  softShadows) ;

/// @brief Method SetupForEmptyRendering, addr 0x18214cad0, size 0x4c0, virtual false, abstract: false, final false
inline bool SetupForEmptyRendering(bool  stripShadowsOffVariants, bool  shadowsEnabled, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData) ;

/// @brief Method UpdateTextureDescriptorIfNeeded, addr 0x18214ec00, size 0xd0, virtual false, abstract: false, final false
inline void UpdateTextureDescriptorIfNeeded() ;

/// @brief Method UsesBakedShadows, addr 0x18214ecd0, size 0x20, virtual false, abstract: false, final false
inline bool UsesBakedShadows(::UnityEngine::Light*  light) ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_AdditionalLightIndexToShadowParams() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_AdditionalLightIndexToShadowParams() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_AdditionalLightShadowDescriptor() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_AdditionalLightShadowDescriptor() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() ;

constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData> const& __cordl_internal_get_m_AdditionalLightsShadowSlices() const;

constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData>& __cordl_internal_get_m_AdditionalLightsShadowSlices() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_AdditionalLightsShadowmapHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_AdditionalLightsShadowmapHandle() ;

constexpr bool const& __cordl_internal_get_m_BlitsExecutedThisFrame() const;

constexpr bool& __cordl_internal_get_m_BlitsExecutedThisFrame() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_CachedStaleKeys() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_CachedStaleKeys() ;

constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

constexpr float_t& __cordl_internal_get_m_CascadeBorder() ;

constexpr bool const& __cordl_internal_get_m_CreateEmptyShadowmap() const;

constexpr bool& __cordl_internal_get_m_CreateEmptyShadowmap() ;

constexpr bool const& __cordl_internal_get_m_EmptyShadowmapNeedsClear() const;

constexpr bool& __cordl_internal_get_m_EmptyShadowmapNeedsClear() ;

constexpr bool const& __cordl_internal_get_m_EnableShadowCaching() const;

constexpr bool& __cordl_internal_get_m_EnableShadowCaching() ;

constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() const;

constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() ;

constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices() const;

constexpr bool& __cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices() ;

constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale() const;

constexpr bool& __cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale() ;

constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig() const;

constexpr bool& __cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig() ;

constexpr bool const& __cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany() const;

constexpr bool& __cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany() ;

constexpr int32_t const& __cordl_internal_get_m_LastAtlasHeight() const;

constexpr int32_t& __cordl_internal_get_m_LastAtlasHeight() ;

constexpr int32_t const& __cordl_internal_get_m_LastAtlasWidth() const;

constexpr int32_t& __cordl_internal_get_m_LastAtlasWidth() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_m_LastFrameSlotToLightInstanceID() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_m_LastFrameSlotToLightInstanceID() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>* const& __cordl_internal_get_m_LastFrameSlotToPosition() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*& __cordl_internal_get_m_LastFrameSlotToPosition() ;

constexpr int32_t const& __cordl_internal_get_m_LastSlotCount() const;

constexpr int32_t& __cordl_internal_get_m_LastSlotCount() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>* const& __cordl_internal_get_m_LightShadowStateCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>*& __cordl_internal_get_m_LightShadowStateCache() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_LightsNeedingBlitFallback() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_LightsNeedingBlitFallback() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_LightsToUpdateThisFrame() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_LightsToUpdateThisFrame() ;

constexpr int32_t const& __cordl_internal_get_m_MaxPriorityLightUpdatesPerFrame() const;

constexpr int32_t& __cordl_internal_get_m_MaxPriorityLightUpdatesPerFrame() ;

constexpr float_t const& __cordl_internal_get_m_MaxShadowDistanceSq() const;

constexpr float_t& __cordl_internal_get_m_MaxShadowDistanceSq() ;

constexpr int32_t const& __cordl_internal_get_m_MaxShadowUpdatesPerFrame() const;

constexpr int32_t& __cordl_internal_get_m_MaxShadowUpdatesPerFrame() ;

constexpr bool const& __cordl_internal_get_m_NeedFullAtlasClear() const;

constexpr bool& __cordl_internal_get_m_NeedFullAtlasClear() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>* const& __cordl_internal_get_m_PriorityLightsTemp() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*& __cordl_internal_get_m_PriorityLightsTemp() ;

constexpr int32_t const& __cordl_internal_get_m_PriorityRoundRobinIndex() const;

constexpr int32_t& __cordl_internal_get_m_PriorityRoundRobinIndex() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_ProcessedLightsForUpdate() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_ProcessedLightsForUpdate() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_ProcessedPriorityLights() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_ProcessedPriorityLights() ;

constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSetupSampler() const;

constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSetupSampler() ;

constexpr int32_t const& __cordl_internal_get_m_RoundRobinStartIndex() const;

constexpr int32_t& __cordl_internal_get_m_RoundRobinStartIndex() ;

constexpr bool const& __cordl_internal_get_m_SetKeywordForEmptyShadowmap() const;

constexpr bool& __cordl_internal_get_m_SetKeywordForEmptyShadowmap() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>* const& __cordl_internal_get_m_ShadowBlitsThisFrame() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>*& __cordl_internal_get_m_ShadowBlitsThisFrame() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>* const& __cordl_internal_get_m_ShadowRequestsHashes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>*& __cordl_internal_get_m_ShadowRequestsHashes() ;

constexpr ::System::Collections::Generic::List_1<int16_t>* const& __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() const;

constexpr ::System::Collections::Generic::List_1<int16_t>*& __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_m_SlotToLightInstanceID() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_m_SlotToLightInstanceID() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>* const& __cordl_internal_get_m_SlotToPosition() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*& __cordl_internal_get_m_SlotToPosition() ;

constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

constexpr bool& __cordl_internal_get_m_UseStructuredBuffer() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_m_VisibleLightIndexToIsCastingShadows() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_m_VisibleLightIndexToIsCastingShadows() ;

constexpr int32_t const& __cordl_internal_get_renderTargetHeight() const;

constexpr int32_t& __cordl_internal_get_renderTargetHeight() ;

constexpr int32_t const& __cordl_internal_get_renderTargetWidth() const;

constexpr int32_t& __cordl_internal_get_renderTargetWidth() ;

constexpr void __cordl_internal_set_m_AdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightShadowDescriptor(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightsShadowSlices(::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData>  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightsShadowmapHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_BlitsExecutedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_CachedStaleKeys(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_CascadeBorder(float_t  value) ;

constexpr void __cordl_internal_set_m_CreateEmptyShadowmap(bool  value) ;

constexpr void __cordl_internal_set_m_EmptyShadowmapNeedsClear(bool  value) ;

constexpr void __cordl_internal_set_m_EnableShadowCaching(bool  value) ;

constexpr void __cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex(::System::Collections::Generic::List_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_m_IssuedMessageAboutRemovedShadowSlices(bool  value) ;

constexpr void __cordl_internal_set_m_IssuedMessageAboutShadowMapsRescale(bool  value) ;

constexpr void __cordl_internal_set_m_IssuedMessageAboutShadowMapsTooBig(bool  value) ;

constexpr void __cordl_internal_set_m_IssuedMessageAboutShadowSlicesTooMany(bool  value) ;

constexpr void __cordl_internal_set_m_LastAtlasHeight(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastAtlasWidth(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastFrameSlotToLightInstanceID(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_LastFrameSlotToPosition(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  value) ;

constexpr void __cordl_internal_set_m_LastSlotCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_LightShadowStateCache(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>*  value) ;

constexpr void __cordl_internal_set_m_LightsNeedingBlitFallback(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_LightsToUpdateThisFrame(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_MaxPriorityLightUpdatesPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_MaxShadowDistanceSq(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxShadowUpdatesPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_NeedFullAtlasClear(bool  value) ;

constexpr void __cordl_internal_set_m_PriorityLightsTemp(::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  value) ;

constexpr void __cordl_internal_set_m_PriorityRoundRobinIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_ProcessedLightsForUpdate(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ProcessedPriorityLights(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler*  value) ;

constexpr void __cordl_internal_set_m_RoundRobinStartIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_SetKeywordForEmptyShadowmap(bool  value) ;

constexpr void __cordl_internal_set_m_ShadowBlitsThisFrame(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>*  value) ;

constexpr void __cordl_internal_set_m_ShadowRequestsHashes(::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>*  value) ;

constexpr void __cordl_internal_set_m_ShadowSliceToAdditionalLightIndex(::System::Collections::Generic::List_1<int16_t>*  value) ;

constexpr void __cordl_internal_set_m_SlotToLightInstanceID(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_SlotToPosition(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  value) ;

constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool  value) ;

constexpr void __cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_m_VisibleLightIndexToIsCastingShadows(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_renderTargetHeight(int32_t  value) ;

constexpr void __cordl_internal_set_renderTargetWidth(int32_t  value) ;

/// @brief Method .ctor, addr 0x18214ed20, size 0x580, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt) ;

static inline ::UnityEngine::Vector4 getStaticF_c_DefaultShadowParams() ;

static inline bool getStaticF_isAdditionalShadowParamsDirty() ;

static inline int32_t getStaticF_m_AdditionalShadowsBufferId() ;

static inline int32_t getStaticF_m_AdditionalShadowsIndicesId() ;

static inline bool getStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall() ;

static inline bool getStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall() ;

static inline ::ArrayW<::UnityEngine::Vector4> getStaticF_s_EmptyAdditionalLightIndexToShadowParams() ;

static inline ::UnityEngine::Vector4 getStaticF_s_EmptyAdditionalShadowFadeParams() ;

/// @brief Method get_EnableShadowCaching, addr 0x180371730, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableShadowCaching() ;

/// @brief Method get_MaxPriorityLightUpdatesPerFrame, addr 0x1813eff30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_MaxPriorityLightUpdatesPerFrame() ;

/// @brief Method get_MaxShadowUpdatesPerFrame, addr 0x1813eff40, size 0x10, virtual false, abstract: false, final false
inline int32_t get_MaxShadowUpdatesPerFrame() ;

static inline void setStaticF_c_DefaultShadowParams(::UnityEngine::Vector4  value) ;

static inline void setStaticF_isAdditionalShadowParamsDirty(bool  value) ;

static inline void setStaticF_m_AdditionalShadowsBufferId(int32_t  value) ;

static inline void setStaticF_m_AdditionalShadowsIndicesId(int32_t  value) ;

static inline void setStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall(bool  value) ;

static inline void setStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall(bool  value) ;

static inline void setStaticF_s_EmptyAdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4>  value) ;

static inline void setStaticF_s_EmptyAdditionalShadowFadeParams(::UnityEngine::Vector4  value) ;

/// @brief Method set_EnableShadowCaching, addr 0x18214f2a0, size 0x10, virtual false, abstract: false, final false
inline void set_EnableShadowCaching(bool  value) ;

/// @brief Method set_MaxPriorityLightUpdatesPerFrame, addr 0x18214f2b0, size 0x10, virtual false, abstract: false, final false
inline void set_MaxPriorityLightUpdatesPerFrame(int32_t  value) ;

/// @brief Method set_MaxShadowUpdatesPerFrame, addr 0x18214f2c0, size 0x10, virtual false, abstract: false, final false
inline void set_MaxShadowUpdatesPerFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowCasterPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditionalLightsShadowCasterPass(AdditionalLightsShadowCasterPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditionalLightsShadowCasterPass(AdditionalLightsShadowCasterPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12692};

/// @brief Field k_AdditionalLightShadowMapTextureName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AdditionalLightShadowMapTextureName{u"_AdditionalLightsShadowmapTexture"};

/// @brief Field k_LightTypeIdentifierInShadowParams_Point offset 0xffffffff size 0x4
static constexpr float_t  k_LightTypeIdentifierInShadowParams_Point{static_cast<float_t>(1.0f)};

/// @brief Field k_LightTypeIdentifierInShadowParams_Spot offset 0xffffffff size 0x4
static constexpr float_t  k_LightTypeIdentifierInShadowParams_Spot{static_cast<float_t>(0.0f)};

/// @brief Field k_MatrixEqualityThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_MatrixEqualityThreshold{static_cast<float_t>(0.0001f)};

/// @brief Field k_ShadowmapBufferBits offset 0xffffffff size 0x4
static constexpr int32_t  k_ShadowmapBufferBits{static_cast<int32_t>(0x10)};

/// @brief Field m_AdditionalLightsShadowmapHandle, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_AdditionalLightsShadowmapHandle;

/// @brief Field m_LightShadowStateCache, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_CachedLightShadowState>*  ___m_LightShadowStateCache;

/// @brief Field m_LightsToUpdateThisFrame, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_LightsToUpdateThisFrame;

/// @brief Field m_CachedStaleKeys, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_CachedStaleKeys;

/// @brief Field m_SlotToLightInstanceID, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___m_SlotToLightInstanceID;

/// @brief Field m_LastFrameSlotToLightInstanceID, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___m_LastFrameSlotToLightInstanceID;

/// @brief Field m_SlotToPosition, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  ___m_SlotToPosition;

/// @brief Field m_LastFrameSlotToPosition, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_SlotPosition>*  ___m_LastFrameSlotToPosition;

/// @brief Field m_PriorityLightsTemp, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,int32_t,int32_t>>*  ___m_PriorityLightsTemp;

/// @brief Field m_ShadowBlitsThisFrame, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_ShadowBlitInfo>*  ___m_ShadowBlitsThisFrame;

/// @brief Field m_LightsNeedingBlitFallback, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_LightsNeedingBlitFallback;

/// @brief Field m_ProcessedLightsForUpdate, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_ProcessedLightsForUpdate;

/// @brief Field m_ProcessedPriorityLights, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_ProcessedPriorityLights;

/// @brief Field m_BlitsExecutedThisFrame, offset: 0xc8, size: 0x1, def value: None
 bool  ___m_BlitsExecutedThisFrame;

/// @brief Field m_MaxShadowUpdatesPerFrame, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___m_MaxShadowUpdatesPerFrame;

/// @brief Field m_MaxPriorityLightUpdatesPerFrame, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___m_MaxPriorityLightUpdatesPerFrame;

/// @brief Field m_EnableShadowCaching, offset: 0xd4, size: 0x1, def value: None
 bool  ___m_EnableShadowCaching;

/// @brief Field m_LastAtlasWidth, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___m_LastAtlasWidth;

/// @brief Field m_LastAtlasHeight, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___m_LastAtlasHeight;

/// @brief Field m_LastSlotCount, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___m_LastSlotCount;

/// @brief Field m_RoundRobinStartIndex, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___m_RoundRobinStartIndex;

/// @brief Field m_PriorityRoundRobinIndex, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___m_PriorityRoundRobinIndex;

/// @brief Field renderTargetWidth, offset: 0xec, size: 0x4, def value: None
 int32_t  ___renderTargetWidth;

/// @brief Field renderTargetHeight, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___renderTargetHeight;

/// @brief Field m_CreateEmptyShadowmap, offset: 0xf4, size: 0x1, def value: None
 bool  ___m_CreateEmptyShadowmap;

/// @brief Field m_SetKeywordForEmptyShadowmap, offset: 0xf5, size: 0x1, def value: None
 bool  ___m_SetKeywordForEmptyShadowmap;

/// @brief Field m_EmptyShadowmapNeedsClear, offset: 0xf6, size: 0x1, def value: None
 bool  ___m_EmptyShadowmapNeedsClear;

/// @brief Field m_NeedFullAtlasClear, offset: 0xf7, size: 0x1, def value: None
 bool  ___m_NeedFullAtlasClear;

/// @brief Field m_IssuedMessageAboutShadowSlicesTooMany, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_IssuedMessageAboutShadowSlicesTooMany;

/// @brief Field m_IssuedMessageAboutShadowMapsRescale, offset: 0xf9, size: 0x1, def value: None
 bool  ___m_IssuedMessageAboutShadowMapsRescale;

/// @brief Field m_IssuedMessageAboutShadowMapsTooBig, offset: 0xfa, size: 0x1, def value: None
 bool  ___m_IssuedMessageAboutShadowMapsTooBig;

/// @brief Field m_IssuedMessageAboutRemovedShadowSlices, offset: 0xfb, size: 0x1, def value: None
 bool  ___m_IssuedMessageAboutRemovedShadowSlices;

/// @brief Field m_UseStructuredBuffer, offset: 0xfc, size: 0x1, def value: None
 bool  ___m_UseStructuredBuffer;

/// @brief Field m_MaxShadowDistanceSq, offset: 0x100, size: 0x4, def value: None
 float_t  ___m_MaxShadowDistanceSq;

/// @brief Field m_CascadeBorder, offset: 0x104, size: 0x4, def value: None
 float_t  ___m_CascadeBorder;

/// @brief Field m_VisibleLightIndexToIsCastingShadows, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<bool>  ___m_VisibleLightIndexToIsCastingShadows;

/// @brief Field m_VisibleLightIndexToAdditionalLightIndex, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___m_VisibleLightIndexToAdditionalLightIndex;

/// @brief Field m_AdditionalLightIndexToVisibleLightIndex, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___m_AdditionalLightIndexToVisibleLightIndex;

/// @brief Field m_AdditionalLightIndexToShadowParams, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_AdditionalLightIndexToShadowParams;

/// @brief Field m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

/// @brief Field m_AdditionalLightsShadowSlices, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData>  ___m_AdditionalLightsShadowSlices;

/// @brief Field m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint8_t>*  ___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

/// @brief Field m_ShadowSliceToAdditionalLightIndex, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int16_t>*  ___m_ShadowSliceToAdditionalLightIndex;

/// @brief Field m_ShadowRequestsHashes, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,uint64_t>*  ___m_ShadowRequestsHashes;

/// @brief Field m_ProfilingSetupSampler, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::Rendering::ProfilingSampler*  ___m_ProfilingSetupSampler;

/// @brief Field m_AdditionalLightShadowDescriptor, offset: 0x158, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ___m_AdditionalLightShadowDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowmapHandle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LightShadowStateCache) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LightsToUpdateThisFrame) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CachedStaleKeys) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_SlotToLightInstanceID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LastFrameSlotToLightInstanceID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_SlotToPosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LastFrameSlotToPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_PriorityLightsTemp) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowBlitsThisFrame) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LightsNeedingBlitFallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ProcessedLightsForUpdate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ProcessedPriorityLights) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_BlitsExecutedThisFrame) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_MaxShadowUpdatesPerFrame) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_MaxPriorityLightUpdatesPerFrame) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_EnableShadowCaching) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LastAtlasWidth) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LastAtlasHeight) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_LastSlotCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_RoundRobinStartIndex) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_PriorityRoundRobinIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___renderTargetWidth) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___renderTargetHeight) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CreateEmptyShadowmap) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_SetKeywordForEmptyShadowmap) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_EmptyShadowmapNeedsClear) == 0xf6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_NeedFullAtlasClear) == 0xf7, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutShadowSlicesTooMany) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutShadowMapsRescale) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutShadowMapsTooBig) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_IssuedMessageAboutRemovedShadowSlices) == 0xfb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_UseStructuredBuffer) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_MaxShadowDistanceSq) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CascadeBorder) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToIsCastingShadows) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToAdditionalLightIndex) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightIndexToVisibleLightIndex) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightIndexToShadowParams) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowSlices) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowSliceToAdditionalLightIndex) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowRequestsHashes) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ProfilingSetupSampler) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightShadowDescriptor) == 0x158, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass) == 0x190, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal::Internal
