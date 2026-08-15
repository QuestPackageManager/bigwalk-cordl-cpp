#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEProxyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TVEProxyData)
namespace TheVisualEngine {
class TVETerrain;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEProxyData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEProxyData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEProxyData*, "TheVisualEngine", "TVEProxyData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEProxyData
class CORDL_TYPE TVEProxyData : public ::System::Object {
public:
// Declarations
/// @brief Field bakeAlbedoAsSRGB, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_bakeAlbedoAsSRGB, put=__cordl_internal_set_bakeAlbedoAsSRGB)) bool  bakeAlbedoAsSRGB;

/// @brief Field bakeCoord, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bakeCoord, put=__cordl_internal_set_bakeCoord)) int32_t  bakeCoord;

/// @brief Field bakeData, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bakeData, put=__cordl_internal_set_bakeData)) int32_t  bakeData;

/// @brief Field blitGameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitGameObject, put=__cordl_internal_set_blitGameObject)) ::UnityW<::UnityEngine::GameObject>  blitGameObject;

/// @brief Field blitMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitMaterial, put=__cordl_internal_set_blitMaterial)) ::UnityW<::UnityEngine::Material>  blitMaterial;

/// @brief Field blitMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitMesh, put=__cordl_internal_set_blitMesh)) ::UnityW<::UnityEngine::Mesh>  blitMesh;

/// @brief Field blitShader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitShader, put=__cordl_internal_set_blitShader)) ::UnityW<::UnityEngine::Shader>  blitShader;

/// @brief Field blitTVETerrain, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitTVETerrain, put=__cordl_internal_set_blitTVETerrain)) ::UnityW<::TheVisualEngine::TVETerrain>  blitTVETerrain;

/// @brief Field saveAsDefault, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveAsDefault, put=__cordl_internal_set_saveAsDefault)) bool  saveAsDefault;

/// @brief Field saveAsSRGB, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveAsSRGB, put=__cordl_internal_set_saveAsSRGB)) bool  saveAsSRGB;

/// @brief Field saveSize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveSize, put=__cordl_internal_set_saveSize)) int32_t  saveSize;

static inline ::TheVisualEngine::TVEProxyData* New_ctor() ;

constexpr bool const& __cordl_internal_get_bakeAlbedoAsSRGB() const;

constexpr bool& __cordl_internal_get_bakeAlbedoAsSRGB() ;

constexpr int32_t const& __cordl_internal_get_bakeCoord() const;

constexpr int32_t& __cordl_internal_get_bakeCoord() ;

constexpr int32_t const& __cordl_internal_get_bakeData() const;

constexpr int32_t& __cordl_internal_get_bakeData() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_blitGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_blitGameObject() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blitMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_blitMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_blitMesh() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_blitShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_blitShader() ;

constexpr ::UnityW<::TheVisualEngine::TVETerrain> const& __cordl_internal_get_blitTVETerrain() const;

constexpr ::UnityW<::TheVisualEngine::TVETerrain>& __cordl_internal_get_blitTVETerrain() ;

constexpr bool const& __cordl_internal_get_saveAsDefault() const;

constexpr bool& __cordl_internal_get_saveAsDefault() ;

constexpr bool const& __cordl_internal_get_saveAsSRGB() const;

constexpr bool& __cordl_internal_get_saveAsSRGB() ;

constexpr int32_t const& __cordl_internal_get_saveSize() const;

constexpr int32_t& __cordl_internal_get_saveSize() ;

constexpr void __cordl_internal_set_bakeAlbedoAsSRGB(bool  value) ;

constexpr void __cordl_internal_set_bakeCoord(int32_t  value) ;

constexpr void __cordl_internal_set_bakeData(int32_t  value) ;

constexpr void __cordl_internal_set_blitGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_blitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blitMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_blitShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_blitTVETerrain(::UnityW<::TheVisualEngine::TVETerrain>  value) ;

constexpr void __cordl_internal_set_saveAsDefault(bool  value) ;

constexpr void __cordl_internal_set_saveAsSRGB(bool  value) ;

constexpr void __cordl_internal_set_saveSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x1804b98b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEProxyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEProxyData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEProxyData(TVEProxyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEProxyData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEProxyData(TVEProxyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19595};

/// @brief Field blitGameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___blitGameObject;

/// @brief Field blitTVETerrain, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TheVisualEngine::TVETerrain>  ___blitTVETerrain;

/// @brief Field blitMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___blitMesh;

/// @brief Field blitShader, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___blitShader;

/// @brief Field blitMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blitMaterial;

/// @brief Field bakeCoord, offset: 0x38, size: 0x4, def value: None
 int32_t  ___bakeCoord;

/// @brief Field bakeData, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___bakeData;

/// @brief Field bakeAlbedoAsSRGB, offset: 0x40, size: 0x1, def value: None
 bool  ___bakeAlbedoAsSRGB;

/// @brief Field saveSize, offset: 0x44, size: 0x4, def value: None
 int32_t  ___saveSize;

/// @brief Field saveAsSRGB, offset: 0x48, size: 0x1, def value: None
 bool  ___saveAsSRGB;

/// @brief Field saveAsDefault, offset: 0x49, size: 0x1, def value: None
 bool  ___saveAsDefault;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___blitGameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___blitTVETerrain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___blitMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___blitShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___blitMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___bakeCoord) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___bakeData) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___bakeAlbedoAsSRGB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___saveSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___saveAsSRGB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEProxyData, ___saveAsDefault) == 0x49, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEProxyData) == 0x50, "Size mismatch!");

} // namespace end def TheVisualEngine
