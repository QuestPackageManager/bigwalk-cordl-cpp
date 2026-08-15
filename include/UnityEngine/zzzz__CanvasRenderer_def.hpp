#pragma once
// IWYU pragma private; include "UnityEngine/CanvasRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRenderer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
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
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct UIVertex;
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
namespace UnityEngine {
class CanvasRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::CanvasRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CanvasRenderer
class CORDL_TYPE CanvasRenderer : public ::UnityEngine::Component {
public:
// Declarations
/// @brief Field <isMask>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMask_k__BackingField, put=__cordl_internal_set__isMask_k__BackingField)) bool  _isMask_k__BackingField;

 __declspec(property(get=get_absoluteDepth)) int32_t  absoluteDepth;

 __declspec(property(put=set_clippingSoftness)) ::UnityEngine::Vector2  clippingSoftness;

 __declspec(property(get=get_cull, put=set_cull)) bool  cull;

 __declspec(property(get=get_cullTransparentMesh, put=set_cullTransparentMesh)) bool  cullTransparentMesh;

 __declspec(property(get=get_hasMoved)) bool  hasMoved;

 __declspec(property(put=set_hasPopInstruction)) bool  hasPopInstruction;

 __declspec(property(get=get_materialCount, put=set_materialCount)) int32_t  materialCount;

 __declspec(property(put=set_popMaterialCount)) int32_t  popMaterialCount;

/// @brief Method AddUIVertexStream, addr 0x1825136a0, size 0x10, virtual false, abstract: false, final false
static inline void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents) ;

/// @brief Method Clear, addr 0x1825136c0, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear_Injected, addr 0x1825136b0, size 0x10, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CreateUIVertexStream, addr 0x1825136f0, size 0x10, virtual false, abstract: false, final false
static inline void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method CreateUIVertexStreamInternal, addr 0x1825136f0, size 0x10, virtual false, abstract: false, final false
static inline void CreateUIVertexStreamInternal(::System::Object*  verts, ::System::Object*  positions, ::System::Object*  colors, ::System::Object*  uv0S, ::System::Object*  uv1S, ::System::Object*  uv2S, ::System::Object*  uv3S, ::System::Object*  normals, ::System::Object*  tangents, ::System::Object*  indices) ;

/// @brief Method DisableRectClipping, addr 0x182513710, size 0x30, virtual false, abstract: false, final false
inline void DisableRectClipping() ;

/// @brief Method DisableRectClipping_Injected, addr 0x182513700, size 0x10, virtual false, abstract: false, final false
static inline void DisableRectClipping_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method EnableRectClipping, addr 0x182513750, size 0x30, virtual false, abstract: false, final false
inline void EnableRectClipping(::UnityEngine::Rect  rect) ;

/// @brief Method EnableRectClipping_Injected, addr 0x182513740, size 0x10, virtual false, abstract: false, final false
static inline void EnableRectClipping_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  rect) ;

/// @brief Method GetColor, addr 0x182513790, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

/// @brief Method GetColor_Injected, addr 0x182513780, size 0x10, virtual false, abstract: false, final false
static inline void GetColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetMaterial, addr 0x1825137e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial() ;

/// @brief Method GetMaterial, addr 0x182513820, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial(int32_t  index) ;

/// @brief Method GetMaterial_Injected, addr 0x1825137d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMaterial_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

static inline ::UnityEngine::CanvasRenderer* New_ctor() ;

/// @brief Method SetAlphaTexture, addr 0x182513870, size 0x50, virtual false, abstract: false, final false
inline void SetAlphaTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method SetAlphaTexture_Injected, addr 0x182513860, size 0x10, virtual false, abstract: false, final false
static inline void SetAlphaTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  texture) ;

/// @brief Method SetColor, addr 0x1825138d0, size 0x30, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetColor_Injected, addr 0x1825138c0, size 0x10, virtual false, abstract: false, final false
static inline void SetColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method SetMaterial, addr 0x182513a00, size 0x60, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  material, int32_t  index) ;

/// @brief Method SetMaterial, addr 0x182513910, size 0xf0, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  material, ::UnityEngine::Texture*  texture) ;

/// @brief Method SetMaterial_Injected, addr 0x182513900, size 0x10, virtual false, abstract: false, final false
static inline void SetMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, int32_t  index) ;

/// @brief Method SetMesh, addr 0x182513a70, size 0x50, virtual false, abstract: false, final false
inline void SetMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method SetMesh_Injected, addr 0x182513a60, size 0x10, virtual false, abstract: false, final false
static inline void SetMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh) ;

/// @brief Method SetPopMaterial, addr 0x182513ad0, size 0x60, virtual false, abstract: false, final false
inline void SetPopMaterial(::UnityEngine::Material*  material, int32_t  index) ;

/// @brief Method SetPopMaterial_Injected, addr 0x182513ac0, size 0x10, virtual false, abstract: false, final false
static inline void SetPopMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, int32_t  index) ;

/// @brief Method SetSecondaryTexture, addr 0x182513b80, size 0x140, virtual false, abstract: false, final false
inline void SetSecondaryTexture(int32_t  index, ::StringW  name, ::UnityEngine::Texture2D*  texture) ;

/// @brief Method SetSecondaryTextureCount, addr 0x182513b40, size 0x30, virtual false, abstract: false, final false
inline void SetSecondaryTextureCount(int32_t  size) ;

/// @brief Method SetSecondaryTextureCount_Injected, addr 0x182513b30, size 0x10, virtual false, abstract: false, final false
static inline void SetSecondaryTextureCount_Injected(::System::IntPtr  _unity_self, int32_t  size) ;

/// @brief Method SetSecondaryTexture_Injected, addr 0x182513b70, size 0x10, virtual false, abstract: false, final false
static inline void SetSecondaryTexture_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::IntPtr  texture) ;

/// @brief Method SetTexture, addr 0x182513cd0, size 0x50, virtual false, abstract: false, final false
inline void SetTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method SetTexture_Injected, addr 0x182513cc0, size 0x10, virtual false, abstract: false, final false
static inline void SetTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  texture) ;

/// @brief Method SplitIndicesStreamsInternal, addr 0x182513d20, size 0x10, virtual false, abstract: false, final false
static inline void SplitIndicesStreamsInternal(::System::Object*  verts, ::System::Object*  indices) ;

/// @brief Method SplitUIVertexStreams, addr 0x182513d30, size 0x70, virtual false, abstract: false, final false
static inline void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  tangents, ::System::Collections::Generic::List_1<int32_t>*  indices) ;

/// @brief Method SplitUIVertexStreamsInternal, addr 0x1825136a0, size 0x10, virtual false, abstract: false, final false
static inline void SplitUIVertexStreamsInternal(::System::Object*  verts, ::System::Object*  positions, ::System::Object*  colors, ::System::Object*  uv0S, ::System::Object*  uv1S, ::System::Object*  uv2S, ::System::Object*  uv3S, ::System::Object*  normals, ::System::Object*  tangents) ;

constexpr bool const& __cordl_internal_get__isMask_k__BackingField() const;

constexpr bool& __cordl_internal_get__isMask_k__BackingField() ;

constexpr void __cordl_internal_set__isMask_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_absoluteDepth, addr 0x182513db0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_absoluteDepth() ;

/// @brief Method get_absoluteDepth_Injected, addr 0x182513da0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_absoluteDepth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cull, addr 0x182513e30, size 0x30, virtual false, abstract: false, final false
inline bool get_cull() ;

/// @brief Method get_cullTransparentMesh, addr 0x182513df0, size 0x30, virtual false, abstract: false, final false
inline bool get_cullTransparentMesh() ;

/// @brief Method get_cullTransparentMesh_Injected, addr 0x182513de0, size 0x10, virtual false, abstract: false, final false
static inline bool get_cullTransparentMesh_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cull_Injected, addr 0x182513e20, size 0x10, virtual false, abstract: false, final false
static inline bool get_cull_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasMoved, addr 0x182513e70, size 0x30, virtual false, abstract: false, final false
inline bool get_hasMoved() ;

/// @brief Method get_hasMoved_Injected, addr 0x182513e60, size 0x10, virtual false, abstract: false, final false
static inline bool get_hasMoved_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_materialCount, addr 0x182513eb0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_materialCount() ;

/// @brief Method get_materialCount_Injected, addr 0x182513ea0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_materialCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_clippingSoftness, addr 0x182513ef0, size 0x40, virtual false, abstract: false, final false
inline void set_clippingSoftness(::UnityEngine::Vector2  value) ;

/// @brief Method set_clippingSoftness_Injected, addr 0x182513ee0, size 0x10, virtual false, abstract: false, final false
static inline void set_clippingSoftness_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_cull, addr 0x182513f80, size 0x30, virtual false, abstract: false, final false
inline void set_cull(bool  value) ;

/// @brief Method set_cullTransparentMesh, addr 0x182513f40, size 0x30, virtual false, abstract: false, final false
inline void set_cullTransparentMesh(bool  value) ;

/// @brief Method set_cullTransparentMesh_Injected, addr 0x182513f30, size 0x10, virtual false, abstract: false, final false
static inline void set_cullTransparentMesh_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_cull_Injected, addr 0x182513f70, size 0x10, virtual false, abstract: false, final false
static inline void set_cull_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_hasPopInstruction, addr 0x182513fc0, size 0x30, virtual false, abstract: false, final false
inline void set_hasPopInstruction(bool  value) ;

/// @brief Method set_hasPopInstruction_Injected, addr 0x182513fb0, size 0x10, virtual false, abstract: false, final false
static inline void set_hasPopInstruction_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_materialCount, addr 0x182514000, size 0x30, virtual false, abstract: false, final false
inline void set_materialCount(int32_t  value) ;

/// @brief Method set_materialCount_Injected, addr 0x182513ff0, size 0x10, virtual false, abstract: false, final false
static inline void set_materialCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_popMaterialCount, addr 0x182514040, size 0x30, virtual false, abstract: false, final false
inline void set_popMaterialCount(int32_t  value) ;

/// @brief Method set_popMaterialCount_Injected, addr 0x182514030, size 0x10, virtual false, abstract: false, final false
static inline void set_popMaterialCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRenderer(CanvasRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRenderer(CanvasRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21026};

/// @brief Field <isMask>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____isMask_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CanvasRenderer, ____isMask_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::CanvasRenderer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
