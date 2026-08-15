#pragma once
// IWYU pragma private; include "UnityEngine/RenderParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderParams)
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class LightProbeProxyVolume;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
// Forward declare root types
namespace UnityEngine {
struct RenderParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderParams);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderParams, "UnityEngine", "RenderParams");
// Dependencies UnityEngine.Bounds, UnityEngine.EntityId, UnityEngine.MotionVectorGenerationMode, UnityEngine.Rendering.LightProbeUsage, UnityEngine.Rendering.ReflectionProbeUsage, UnityEngine.Rendering.ShadowCastingMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderParams
struct CORDL_TYPE RenderParams {
public:
// Declarations
 __declspec(property(put=set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

 __declspec(property(put=set_entityId)) ::UnityEngine::EntityId  entityId;

 __declspec(property(put=set_forceMeshLod)) int32_t  forceMeshLod;

 __declspec(property(put=set_layer)) int32_t  layer;

 __declspec(property(put=set_lightProbeProxyVolume)) ::UnityW<::UnityEngine::LightProbeProxyVolume>  lightProbeProxyVolume;

 __declspec(property(put=set_lightProbeUsage)) ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage;

 __declspec(property(put=set_matProps)) ::UnityEngine::MaterialPropertyBlock*  matProps;

 __declspec(property(put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(put=set_meshLodSelectionBias)) float_t  meshLodSelectionBias;

 __declspec(property(put=set_motionVectorMode)) ::UnityEngine::MotionVectorGenerationMode  motionVectorMode;

 __declspec(property(put=set_overrideSceneCullingMask)) bool  overrideSceneCullingMask;

 __declspec(property(put=set_receiveShadows)) bool  receiveShadows;

 __declspec(property(put=set_reflectionProbeUsage)) ::UnityEngine::Rendering::ReflectionProbeUsage  reflectionProbeUsage;

 __declspec(property(put=set_rendererPriority)) int32_t  rendererPriority;

 __declspec(property(put=set_renderingLayerMask)) uint32_t  renderingLayerMask;

 __declspec(property(put=set_sceneCullingMask)) uint64_t  sceneCullingMask;

 __declspec(property(put=set_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode  shadowCastingMode;

 __declspec(property(put=set_worldBounds)) ::UnityEngine::Bounds  worldBounds;

/// @brief Method .ctor, addr 0x18225ac30, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  mat) ;

/// @brief Method set_camera, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_camera(::UnityEngine::Camera*  value) ;

/// @brief Method set_entityId, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_entityId(::UnityEngine::EntityId  value) ;

/// @brief Method set_forceMeshLod, addr 0x18051e950, size 0x10, virtual false, abstract: false, final false
inline void set_forceMeshLod(int32_t  value) ;

/// @brief Method set_layer, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_layer(int32_t  value) ;

/// @brief Method set_lightProbeProxyVolume, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_lightProbeProxyVolume(::UnityEngine::LightProbeProxyVolume*  value) ;

/// @brief Method set_lightProbeUsage, addr 0x1803d75f0, size 0x10, virtual false, abstract: false, final false
inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage  value) ;

/// @brief Method set_matProps, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_matProps(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method set_material, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_meshLodSelectionBias, addr 0x180474c60, size 0x10, virtual false, abstract: false, final false
inline void set_meshLodSelectionBias(float_t  value) ;

/// @brief Method set_motionVectorMode, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_motionVectorMode(::UnityEngine::MotionVectorGenerationMode  value) ;

/// @brief Method set_overrideSceneCullingMask, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void set_overrideSceneCullingMask(bool  value) ;

/// @brief Method set_receiveShadows, addr 0x1804a5a50, size 0x10, virtual false, abstract: false, final false
inline void set_receiveShadows(bool  value) ;

/// @brief Method set_reflectionProbeUsage, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage  value) ;

/// @brief Method set_rendererPriority, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_rendererPriority(int32_t  value) ;

/// @brief Method set_renderingLayerMask, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_renderingLayerMask(uint32_t  value) ;

/// @brief Method set_sceneCullingMask, addr 0x180511570, size 0x10, virtual false, abstract: false, final false
inline void set_sceneCullingMask(uint64_t  value) ;

/// @brief Method set_shadowCastingMode, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode  value) ;

/// @brief Method set_worldBounds, addr 0x180503ca0, size 0x20, virtual false, abstract: false, final false
inline void set_worldBounds(::UnityEngine::Bounds  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderParams() ;

// Ctor Parameters [CppParam { name: "_layer_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_renderingLayerMask_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_rendererPriority_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_entityId_k__BackingField", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "_worldBounds_k__BackingField", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "_camera_k__BackingField", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None }, CppParam { name: "_motionVectorMode_k__BackingField", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: None }, CppParam { name: "_reflectionProbeUsage_k__BackingField", ty: "::UnityEngine::Rendering::ReflectionProbeUsage", modifiers: "", def_value: None }, CppParam { name: "_material_k__BackingField", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "_matProps_k__BackingField", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam { name: "_shadowCastingMode_k__BackingField", ty: "::UnityEngine::Rendering::ShadowCastingMode", modifiers: "", def_value: None }, CppParam { name: "_receiveShadows_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_lightProbeUsage_k__BackingField", ty: "::UnityEngine::Rendering::LightProbeUsage", modifiers: "", def_value: None }, CppParam { name: "_lightProbeProxyVolume_k__BackingField", ty: "::UnityW<::UnityEngine::LightProbeProxyVolume>", modifiers: "", def_value: None }, CppParam { name: "_overrideSceneCullingMask_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_sceneCullingMask_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_forceMeshLod_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_meshLodSelectionBias_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr RenderParams(int32_t  _layer_k__BackingField, uint32_t  _renderingLayerMask_k__BackingField, int32_t  _rendererPriority_k__BackingField, ::UnityEngine::EntityId  _entityId_k__BackingField, ::UnityEngine::Bounds  _worldBounds_k__BackingField, ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField, ::UnityEngine::MotionVectorGenerationMode  _motionVectorMode_k__BackingField, ::UnityEngine::Rendering::ReflectionProbeUsage  _reflectionProbeUsage_k__BackingField, ::UnityW<::UnityEngine::Material>  _material_k__BackingField, ::UnityEngine::MaterialPropertyBlock*  _matProps_k__BackingField, ::UnityEngine::Rendering::ShadowCastingMode  _shadowCastingMode_k__BackingField, bool  _receiveShadows_k__BackingField, ::UnityEngine::Rendering::LightProbeUsage  _lightProbeUsage_k__BackingField, ::UnityW<::UnityEngine::LightProbeProxyVolume>  _lightProbeProxyVolume_k__BackingField, bool  _overrideSceneCullingMask_k__BackingField, uint64_t  _sceneCullingMask_k__BackingField, int32_t  _forceMeshLod_k__BackingField, float_t  _meshLodSelectionBias_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <layer>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _layer_k__BackingField;

/// @brief Field <renderingLayerMask>k__BackingField, offset: 0x4, size: 0x4, def value: None
 uint32_t  _renderingLayerMask_k__BackingField;

/// @brief Field <rendererPriority>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _rendererPriority_k__BackingField;

/// @brief Field <entityId>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::EntityId  _entityId_k__BackingField;

/// @brief Field <worldBounds>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::Bounds  _worldBounds_k__BackingField;

/// @brief Field <camera>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField;

/// @brief Field <motionVectorMode>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::MotionVectorGenerationMode  _motionVectorMode_k__BackingField;

/// @brief Field <reflectionProbeUsage>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::Rendering::ReflectionProbeUsage  _reflectionProbeUsage_k__BackingField;

/// @brief Field <material>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  _material_k__BackingField;

/// @brief Field <matProps>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  _matProps_k__BackingField;

/// @brief Field <shadowCastingMode>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShadowCastingMode  _shadowCastingMode_k__BackingField;

/// @brief Field <receiveShadows>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  _receiveShadows_k__BackingField;

/// @brief Field <lightProbeUsage>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::Rendering::LightProbeUsage  _lightProbeUsage_k__BackingField;

/// @brief Field <lightProbeProxyVolume>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LightProbeProxyVolume>  _lightProbeProxyVolume_k__BackingField;

/// @brief Field <overrideSceneCullingMask>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  _overrideSceneCullingMask_k__BackingField;

/// @brief Field <sceneCullingMask>k__BackingField, offset: 0x68, size: 0x8, def value: None
 uint64_t  _sceneCullingMask_k__BackingField;

/// @brief Field <forceMeshLod>k__BackingField, offset: 0x70, size: 0x4, def value: None
 int32_t  _forceMeshLod_k__BackingField;

/// @brief Field <meshLodSelectionBias>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  _meshLodSelectionBias_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderParams, _layer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _renderingLayerMask_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _rendererPriority_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _entityId_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _worldBounds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _camera_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _motionVectorMode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _reflectionProbeUsage_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _material_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _matProps_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _shadowCastingMode_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _receiveShadows_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _lightProbeUsage_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _lightProbeProxyVolume_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _overrideSceneCullingMask_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _sceneCullingMask_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _forceMeshLod_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _meshLodSelectionBias_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RenderParams) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine
