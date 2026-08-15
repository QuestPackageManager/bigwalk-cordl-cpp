#pragma once
// IWYU pragma private; include "UnityEngine/TerrainLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TerrainLayer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Color;
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
class TerrainLayer;
}
// Write type traits
MARK_REF_T(::UnityEngine::TerrainLayer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainLayer*, "UnityEngine", "TerrainLayer");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainLayer
class CORDL_TYPE TerrainLayer : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_diffuseTexture)) ::UnityW<::UnityEngine::Texture2D>  diffuseTexture;

 __declspec(property(get=get_maskMapRemapMax)) ::UnityEngine::Vector4  maskMapRemapMax;

 __declspec(property(get=get_maskMapRemapMin)) ::UnityEngine::Vector4  maskMapRemapMin;

 __declspec(property(get=get_maskMapTexture)) ::UnityW<::UnityEngine::Texture2D>  maskMapTexture;

 __declspec(property(get=get_metallic)) float_t  metallic;

 __declspec(property(get=get_normalMapTexture)) ::UnityW<::UnityEngine::Texture2D>  normalMapTexture;

 __declspec(property(get=get_normalScale)) float_t  normalScale;

 __declspec(property(get=get_smoothness)) float_t  smoothness;

 __declspec(property(get=get_specular)) ::UnityEngine::Color  specular;

 __declspec(property(get=get_tileOffset)) ::UnityEngine::Vector2  tileOffset;

 __declspec(property(get=get_tileSize)) ::UnityEngine::Vector2  tileSize;

/// @brief Method Internal_Create, addr 0x182311390, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::TerrainLayer*  layer) ;

static inline ::UnityEngine::TerrainLayer* New_ctor() ;

/// @brief Method .ctor, addr 0x182311390, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_diffuseTexture, addr 0x1823113b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_diffuseTexture() ;

/// @brief Method get_diffuseTexture_Injected, addr 0x1823113a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_diffuseTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maskMapRemapMax, addr 0x182311400, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_maskMapRemapMax() ;

/// @brief Method get_maskMapRemapMax_Injected, addr 0x1823113f0, size 0x10, virtual false, abstract: false, final false
static inline void get_maskMapRemapMax_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method get_maskMapRemapMin, addr 0x182311450, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_maskMapRemapMin() ;

/// @brief Method get_maskMapRemapMin_Injected, addr 0x182311440, size 0x10, virtual false, abstract: false, final false
static inline void get_maskMapRemapMin_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method get_maskMapTexture, addr 0x1823114a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_maskMapTexture() ;

/// @brief Method get_maskMapTexture_Injected, addr 0x182311490, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_maskMapTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_metallic, addr 0x1823114f0, size 0x30, virtual false, abstract: false, final false
inline float_t get_metallic() ;

/// @brief Method get_metallic_Injected, addr 0x1823114e0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_metallic_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_normalMapTexture, addr 0x182311530, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_normalMapTexture() ;

/// @brief Method get_normalMapTexture_Injected, addr 0x182311520, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_normalMapTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_normalScale, addr 0x182311580, size 0x30, virtual false, abstract: false, final false
inline float_t get_normalScale() ;

/// @brief Method get_normalScale_Injected, addr 0x182311570, size 0x10, virtual false, abstract: false, final false
static inline float_t get_normalScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_smoothness, addr 0x1823115c0, size 0x30, virtual false, abstract: false, final false
inline float_t get_smoothness() ;

/// @brief Method get_smoothness_Injected, addr 0x1823115b0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_smoothness_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_specular, addr 0x182311600, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_specular() ;

/// @brief Method get_specular_Injected, addr 0x1823115f0, size 0x10, virtual false, abstract: false, final false
static inline void get_specular_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_tileOffset, addr 0x182311650, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_tileOffset() ;

/// @brief Method get_tileOffset_Injected, addr 0x182311640, size 0x10, virtual false, abstract: false, final false
static inline void get_tileOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_tileSize, addr 0x1823116a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_tileSize() ;

/// @brief Method get_tileSize_Injected, addr 0x182311690, size 0x10, virtual false, abstract: false, final false
static inline void get_tileSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainLayer(TerrainLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainLayer(TerrainLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainLayer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
