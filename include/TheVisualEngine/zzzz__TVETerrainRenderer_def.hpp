#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrainBaking_def.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_def.hpp"
CORDL_MODULE_EXPORT(TVETerrainRenderer)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TheVisualEngine {
class TVETerrainRenderer;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVETerrainRenderer*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETerrainRenderer*, "TheVisualEngine", "TVETerrainRenderer");
// Dependencies System.Object, TheVisualEngine.TVETerrainBaking, TheVisualEngine.TVETextureSize
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVETerrainRenderer
class CORDL_TYPE TVETerrainRenderer : public ::System::Object {
public:
// Declarations
/// @brief Field bakeMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakeMaterial, put=__cordl_internal_set_bakeMaterial)) ::UnityW<::UnityEngine::Material>  bakeMaterial;

/// @brief Field bakeMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bakeMode, put=__cordl_internal_set_bakeMode)) ::TheVisualEngine::TVETerrainBaking  bakeMode;

/// @brief Field bakeTexture, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_bakeTexture, put=__cordl_internal_set_bakeTexture)) ::TheVisualEngine::TVETextureSize  bakeTexture;

static inline ::TheVisualEngine::TVETerrainRenderer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bakeMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bakeMaterial() ;

constexpr ::TheVisualEngine::TVETerrainBaking const& __cordl_internal_get_bakeMode() const;

constexpr ::TheVisualEngine::TVETerrainBaking& __cordl_internal_get_bakeMode() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_bakeTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_bakeTexture() ;

constexpr void __cordl_internal_set_bakeMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_bakeMode(::TheVisualEngine::TVETerrainBaking  value) ;

constexpr void __cordl_internal_set_bakeTexture(::TheVisualEngine::TVETextureSize  value) ;

/// @brief Method .ctor, addr 0x1804b9950, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVETerrainRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVETerrainRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVETerrainRenderer(TVETerrainRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVETerrainRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVETerrainRenderer(TVETerrainRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19611};

/// @brief Field bakeMode, offset: 0x10, size: 0x4, def value: None
 ::TheVisualEngine::TVETerrainBaking  ___bakeMode;

/// @brief Field bakeTexture, offset: 0x14, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___bakeTexture;

/// @brief Field bakeMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bakeMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETerrainRenderer, ___bakeMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainRenderer, ___bakeTexture) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainRenderer, ___bakeMaterial) == 0x18, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETerrainRenderer) == 0x20, "Size mismatch!");

} // namespace end def TheVisualEngine
