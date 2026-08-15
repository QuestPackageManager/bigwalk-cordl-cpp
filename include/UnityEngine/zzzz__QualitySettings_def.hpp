#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct ShadowProjection;
}
namespace UnityEngine {
struct ShadowQuality;
}
namespace UnityEngine {
struct ShadowmaskMode;
}
namespace UnityEngine {
struct TerrainQualityOverrides;
}
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::QualitySettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.QualitySettings
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field activeQualityLevelChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeQualityLevelChanged, put=setStaticF_activeQualityLevelChanged)) ::System::Action_2<int32_t,int32_t>*  activeQualityLevelChanged;

/// @brief Method GetQualityLevel, addr 0x18225a7c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetQualityLevel() ;

/// @brief Method GetRenderPipelineAssetAt, addr 0x18225a7d0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> GetRenderPipelineAssetAt(int32_t  index) ;

/// @brief Method InternalGetRenderPipelineAssetAt, addr 0x18225a8d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> InternalGetRenderPipelineAssetAt(int32_t  index) ;

/// @brief Method InternalGetRenderPipelineAssetAt_Injected, addr 0x18225a8c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr InternalGetRenderPipelineAssetAt_Injected(int32_t  index) ;

/// @brief Method OnActiveQualityLevelChanged, addr 0x18225a8f0, size 0x30, virtual false, abstract: false, final false
static inline void OnActiveQualityLevelChanged(int32_t  previousQualityLevel, int32_t  currentQualityLevel) ;

/// @brief Method SetQualityLevel, addr 0x18225a930, size 0x10, virtual false, abstract: false, final false
static inline void SetQualityLevel(int32_t  index) ;

/// @brief Method SetQualityLevel, addr 0x18225a920, size 0x10, virtual false, abstract: false, final false
static inline void SetQualityLevel(int32_t  index, bool  applyExpensiveChanges) ;

static inline ::System::Action_2<int32_t,int32_t>* getStaticF_activeQualityLevelChanged() ;

/// @brief Method get_INTERNAL_renderPipeline, addr 0x18225a950, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_renderPipeline() ;

/// @brief Method get_INTERNAL_renderPipeline_Injected, addr 0x18225a940, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_INTERNAL_renderPipeline_Injected() ;

/// @brief Method get_activeColorSpace, addr 0x18225a970, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::ColorSpace get_activeColorSpace() ;

/// @brief Method get_antiAliasing, addr 0x18225a980, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_antiAliasing() ;

/// @brief Method get_billboardsFaceCameraPosition, addr 0x18225a990, size 0x10, virtual false, abstract: false, final false
static inline bool get_billboardsFaceCameraPosition() ;

/// @brief Method get_enableLODCrossFade, addr 0x18225a9a0, size 0x10, virtual false, abstract: false, final false
static inline bool get_enableLODCrossFade() ;

/// @brief Method get_globalTextureMipmapLimit, addr 0x18225a9b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_globalTextureMipmapLimit() ;

/// @brief Method get_lodBias, addr 0x18225a9c0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_lodBias() ;

/// @brief Method get_maxQueuedFrames, addr 0x18225a9d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maxQueuedFrames() ;

/// @brief Method get_maximumLODLevel, addr 0x18225a9e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_maximumLODLevel() ;

/// @brief Method get_meshLodThreshold, addr 0x18225a9f0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_meshLodThreshold() ;

/// @brief Method get_names, addr 0x18225aa00, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_names() ;

/// @brief Method get_pixelLightCount, addr 0x18225aa10, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_pixelLightCount() ;

/// @brief Method get_renderPipeline, addr 0x18225aa20, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_renderPipeline() ;

/// @brief Method get_shadowCascades, addr 0x18225aa90, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_shadowCascades() ;

/// @brief Method get_shadowDistance, addr 0x18225aaa0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_shadowDistance() ;

/// @brief Method get_shadowProjection, addr 0x18225aab0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::ShadowProjection get_shadowProjection() ;

/// @brief Method get_shadowmaskMode, addr 0x18225aac0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::ShadowmaskMode get_shadowmaskMode() ;

/// @brief Method get_shadows, addr 0x18225aad0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::ShadowQuality get_shadows() ;

/// @brief Method get_terrainPixelError, addr 0x18225aae0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_terrainPixelError() ;

/// @brief Method get_terrainQualityOverrides, addr 0x18225aaf0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::TerrainQualityOverrides get_terrainQualityOverrides() ;

/// @brief Method get_vSyncCount, addr 0x18225ab00, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_vSyncCount() ;

static inline void setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method set_antiAliasing, addr 0x18225ab10, size 0x10, virtual false, abstract: false, final false
static inline void set_antiAliasing(int32_t  value) ;

/// @brief Method set_enableLODCrossFade, addr 0x18225ab20, size 0x10, virtual false, abstract: false, final false
static inline void set_enableLODCrossFade(bool  value) ;

/// @brief Method set_lodBias, addr 0x18225ab30, size 0x10, virtual false, abstract: false, final false
static inline void set_lodBias(float_t  value) ;

/// @brief Method set_maximumLODLevel, addr 0x18225ab40, size 0x10, virtual false, abstract: false, final false
static inline void set_maximumLODLevel(int32_t  value) ;

/// @brief Method set_pixelLightCount, addr 0x18225ab50, size 0x10, virtual false, abstract: false, final false
static inline void set_pixelLightCount(int32_t  value) ;

/// @brief Method set_shadowDistance, addr 0x18225ab60, size 0x10, virtual false, abstract: false, final false
static inline void set_shadowDistance(float_t  value) ;

/// @brief Method set_shadows, addr 0x18225ab70, size 0x10, virtual false, abstract: false, final false
static inline void set_shadows(::UnityEngine::ShadowQuality  value) ;

/// @brief Method set_terrainPixelError, addr 0x18225ab80, size 0x10, virtual false, abstract: false, final false
static inline void set_terrainPixelError(float_t  value) ;

/// @brief Method set_terrainQualityOverrides, addr 0x18225ab90, size 0x10, virtual false, abstract: false, final false
static inline void set_terrainQualityOverrides(::UnityEngine::TerrainQualityOverrides  value) ;

/// @brief Method set_vSyncCount, addr 0x18225aba0, size 0x20, virtual false, abstract: false, final false
static inline void set_vSyncCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QualitySettings(QualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QualitySettings(QualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::QualitySettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
