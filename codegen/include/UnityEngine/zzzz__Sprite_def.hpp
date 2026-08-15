#pragma once
// IWYU pragma private; include "UnityEngine/Sprite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sprite)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct SecondarySpriteTexture;
}
namespace UnityEngine {
struct SpriteMeshType;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Sprite;
}
// Write type traits
MARK_REF_T(::UnityEngine::Sprite*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Sprite*, "UnityEngine", "Sprite");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Sprite
class CORDL_TYPE Sprite : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_associatedAlphaSplitTexture)) ::UnityW<::UnityEngine::Texture2D>  associatedAlphaSplitTexture;

 __declspec(property(get=get_border)) ::UnityEngine::Vector4  border;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_packed)) bool  packed;

 __declspec(property(get=get_packingRotation)) ::UnityEngine::SpritePackingRotation  packingRotation;

 __declspec(property(get=get_pivot)) ::UnityEngine::Vector2  pivot;

 __declspec(property(get=get_pixelsPerUnit)) float_t  pixelsPerUnit;

 __declspec(property(get=get_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(get=get_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

 __declspec(property(get=get_textureRect)) ::UnityEngine::Rect  textureRect;

 __declspec(property(get=get_triangles)) ::ArrayW<uint16_t>  triangles;

 __declspec(property(get=get_uv)) ::ArrayW<::UnityEngine::Vector2>  uv;

 __declspec(property(get=get_vertices)) ::ArrayW<::UnityEngine::Vector2>  vertices;

/// @brief Method Create, addr 0x18224b7f0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot) ;

/// @brief Method Create, addr 0x18224b850, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit) ;

/// @brief Method Create, addr 0x18224bc80, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude) ;

/// @brief Method Create, addr 0x18224b790, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType) ;

/// @brief Method Create, addr 0x18224b730, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border) ;

/// @brief Method Create, addr 0x18224b8a0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border, bool  generateFallbackPhysicsShape) ;

/// @brief Method Create, addr 0x18224b910, size 0x370, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> Create(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border, bool  generateFallbackPhysicsShape, ::ArrayW<::UnityEngine::SecondarySpriteTexture>  secondaryTextures) ;

/// @brief Method CreateSprite, addr 0x18224b6b0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Sprite> CreateSprite(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, ::UnityEngine::Vector2  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::UnityEngine::Vector4  border, bool  generateFallbackPhysicsShape, ::ArrayW<::UnityEngine::SecondarySpriteTexture>  secondaryTexture) ;

/// @brief Method CreateSprite_Injected, addr 0x18224b690, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateSprite_Injected(::System::IntPtr  texture, ::by_ref<::UnityEngine::Rect>  rect, ::by_ref<::UnityEngine::Vector2>  pivot, float_t  pixelsPerUnit, uint32_t  extrude, ::UnityEngine::SpriteMeshType  meshType, ::by_ref<::UnityEngine::Vector4>  border, bool  generateFallbackPhysicsShape, ::ArrayW<::UnityEngine::SecondarySpriteTexture>  secondaryTexture) ;

/// @brief Method GetInnerUVs, addr 0x18224bce0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetInnerUVs() ;

/// @brief Method GetInnerUVs_Injected, addr 0x18224bcd0, size 0x10, virtual false, abstract: false, final false
static inline void GetInnerUVs_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetOuterUVs, addr 0x18224bd30, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetOuterUVs() ;

/// @brief Method GetOuterUVs_Injected, addr 0x18224bd20, size 0x10, virtual false, abstract: false, final false
static inline void GetOuterUVs_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetPacked, addr 0x18224bd80, size 0x30, virtual false, abstract: false, final false
inline int32_t GetPacked() ;

/// @brief Method GetPacked_Injected, addr 0x18224bd70, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetPacked_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPackingRotation, addr 0x18224bdc0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetPackingRotation() ;

/// @brief Method GetPackingRotation_Injected, addr 0x18224bdb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetPackingRotation_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPadding, addr 0x18224be00, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetPadding() ;

/// @brief Method GetPadding_Injected, addr 0x18224bdf0, size 0x10, virtual false, abstract: false, final false
static inline void GetPadding_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method GetSecondaryTextureCount, addr 0x18224be50, size 0x30, virtual false, abstract: false, final false
inline int32_t GetSecondaryTextureCount() ;

/// @brief Method GetSecondaryTextureCount_Injected, addr 0x18224be40, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetSecondaryTextureCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetSecondaryTextures, addr 0x18224be90, size 0x60, virtual false, abstract: false, final false
inline int32_t GetSecondaryTextures(::ArrayW<::UnityEngine::SecondarySpriteTexture>  secondaryTexture) ;

/// @brief Method GetSecondaryTextures_Injected, addr 0x18224be80, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetSecondaryTextures_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::SecondarySpriteTexture>  secondaryTexture) ;

/// @brief Method GetTextureRect, addr 0x18224bf00, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetTextureRect() ;

/// @brief Method GetTextureRect_Injected, addr 0x18224bef0, size 0x10, virtual false, abstract: false, final false
static inline void GetTextureRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

static inline ::UnityEngine::Sprite* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_associatedAlphaSplitTexture, addr 0x18224bf50, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_associatedAlphaSplitTexture() ;

/// @brief Method get_associatedAlphaSplitTexture_Injected, addr 0x18224bf40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_associatedAlphaSplitTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_border, addr 0x18224bfa0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_border() ;

/// @brief Method get_border_Injected, addr 0x18224bf90, size 0x10, virtual false, abstract: false, final false
static inline void get_border_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method get_bounds, addr 0x18224bff0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x18224bfe0, size 0x10, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_packed, addr 0x18224c030, size 0x30, virtual false, abstract: false, final false
inline bool get_packed() ;

/// @brief Method get_packingRotation, addr 0x18224bdc0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::SpritePackingRotation get_packingRotation() ;

/// @brief Method get_pivot, addr 0x18224c070, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pivot() ;

/// @brief Method get_pivot_Injected, addr 0x18224c060, size 0x10, virtual false, abstract: false, final false
static inline void get_pivot_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_pixelsPerUnit, addr 0x18224c0c0, size 0x30, virtual false, abstract: false, final false
inline float_t get_pixelsPerUnit() ;

/// @brief Method get_pixelsPerUnit_Injected, addr 0x18224c0b0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_pixelsPerUnit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rect, addr 0x18224c100, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0x18224c0f0, size 0x10, virtual false, abstract: false, final false
static inline void get_rect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_texture, addr 0x18224c150, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_texture() ;

/// @brief Method get_textureRect, addr 0x18224bf00, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_textureRect() ;

/// @brief Method get_texture_Injected, addr 0x18224c140, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_texture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_triangles, addr 0x18224c1a0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint16_t> get_triangles() ;

/// @brief Method get_triangles_Injected, addr 0x18224c190, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<uint16_t> get_triangles_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_uv, addr 0x18224c1e0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_uv() ;

/// @brief Method get_uv_Injected, addr 0x18224c1d0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> get_uv_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertices, addr 0x18224c220, size 0x40, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_vertices() ;

/// @brief Method get_vertices_Injected, addr 0x18224c210, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> get_vertices_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sprite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Sprite(Sprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sprite(Sprite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Sprite) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
