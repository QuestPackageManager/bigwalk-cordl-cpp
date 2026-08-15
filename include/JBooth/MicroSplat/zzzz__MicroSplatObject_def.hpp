#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MicroSplatObject)
namespace JBooth::MicroSplat {
class MicroSplatKeywords;
}
namespace JBooth::MicroSplat {
struct MicroSplatObject_TerrainDescriptor;
}
namespace JBooth::MicroSplat {
class MicroSplatPropData;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace JBooth::MicroSplat {
class MicroSplatObject;
}
namespace JBooth::MicroSplat {
struct MicroSplatObject_TerrainDescriptor;
}
// Write type traits
MARK_REF_T(::JBooth::MicroSplat::MicroSplatObject*);
MARK_VAL_T(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatObject*, "JBooth.MicroSplat", "MicroSplatObject");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor, "JBooth.MicroSplat", "MicroSplatObject/TerrainDescriptor");
// Dependencies UnityEngine.Vector3
namespace JBooth::MicroSplat {
// Is value type: true
// CS Name: JBooth.MicroSplat.MicroSplatObject/TerrainDescriptor
struct CORDL_TYPE MicroSplatObject_TerrainDescriptor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatObject_TerrainDescriptor() ;

// Ctor Parameters [CppParam { name: "heightMap", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "normalMap", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "heightMapScale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr MicroSplatObject_TerrainDescriptor(::UnityW<::UnityEngine::Texture>  heightMap, ::UnityW<::UnityEngine::Texture>  normalMap, ::UnityEngine::Vector3  heightMapScale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field heightMap, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  heightMap;

/// @brief Field normalMap, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  normalMap;

/// @brief Field heightMapScale, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  heightMapScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor, heightMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor, normalMap) == 0x8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor, heightMapScale) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies UnityEngine.MonoBehaviour
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatObject
class CORDL_TYPE MicroSplatObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TerrainDescriptor = ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor;

/// @brief Field blendMat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendMat, put=__cordl_internal_set_blendMat)) ::UnityW<::UnityEngine::Material>  blendMat;

/// @brief Field blendMatInstance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendMatInstance, put=__cordl_internal_set_blendMatInstance)) ::UnityW<::UnityEngine::Material>  blendMatInstance;

/// @brief Field geoTextureOverride, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoTextureOverride, put=__cordl_internal_set_geoTextureOverride)) ::UnityW<::UnityEngine::Texture2D>  geoTextureOverride;

/// @brief Field globalEmisOverride, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalEmisOverride, put=__cordl_internal_set_globalEmisOverride)) ::UnityW<::UnityEngine::Texture2D>  globalEmisOverride;

/// @brief Field globalNormalOverride, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalNormalOverride, put=__cordl_internal_set_globalNormalOverride)) ::UnityW<::UnityEngine::Texture2D>  globalNormalOverride;

/// @brief Field globalSAOMOverride, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalSAOMOverride, put=__cordl_internal_set_globalSAOMOverride)) ::UnityW<::UnityEngine::Texture2D>  globalSAOMOverride;

/// @brief Field keywordSO, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_keywordSO, put=__cordl_internal_set_keywordSO)) ::UnityW<::JBooth::MicroSplat::MicroSplatKeywords>  keywordSO;

/// @brief Field matInstance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_matInstance, put=__cordl_internal_set_matInstance)) ::UnityW<::UnityEngine::Material>  matInstance;

/// @brief Field perPixelNormal, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_perPixelNormal, put=__cordl_internal_set_perPixelNormal)) ::UnityW<::UnityEngine::Texture2D>  perPixelNormal;

/// @brief Field propData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_propData, put=__cordl_internal_set_propData)) ::UnityW<::JBooth::MicroSplat::MicroSplatPropData>  propData;

/// @brief Field streamTexture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_streamTexture, put=__cordl_internal_set_streamTexture)) ::UnityW<::UnityEngine::Texture2D>  streamTexture;

/// @brief Field templateMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateMaterial, put=__cordl_internal_set_templateMaterial)) ::UnityW<::UnityEngine::Material>  templateMaterial;

/// @brief Field tintMapOverride, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tintMapOverride, put=__cordl_internal_set_tintMapOverride)) ::UnityW<::UnityEngine::Texture2D>  tintMapOverride;

/// @brief Field tintMapOverride2, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tintMapOverride2, put=__cordl_internal_set_tintMapOverride2)) ::UnityW<::UnityEngine::Texture2D>  tintMapOverride2;

/// @brief Field vsGrassMap, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_vsGrassMap, put=__cordl_internal_set_vsGrassMap)) ::UnityW<::UnityEngine::Texture2D>  vsGrassMap;

/// @brief Field vsShadowMap, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_vsShadowMap, put=__cordl_internal_set_vsShadowMap)) ::UnityW<::UnityEngine::Texture2D>  vsShadowMap;

/// @brief Method ApplyBlendMap, addr 0x1813ff980, size 0xf0, virtual false, abstract: false, final false
inline void ApplyBlendMap() ;

/// @brief Method ApplyControlTextures, addr 0x1813ffa70, size 0x1a0, virtual false, abstract: false, final false
inline void ApplyControlTextures(::ArrayW<::UnityEngine::Texture2D*>  controls, ::UnityEngine::Material*  m) ;

/// @brief Method ApplyMaps, addr 0x1813ffc10, size 0x350, virtual false, abstract: false, final false
inline void ApplyMaps(::UnityEngine::Material*  m) ;

/// @brief Method ApplySharedData, addr 0x1813fff60, size 0x410, virtual false, abstract: false, final false
inline void ApplySharedData(::UnityEngine::Material*  m) ;

/// @brief Method GetBlendMatInstance, addr 0x181400370, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetBlendMatInstance() ;

/// @brief Method GetBounds, addr 0x180974130, size 0xeb0, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetOverrideHash, addr 0x181400540, size 0x3b0, virtual false, abstract: false, final false
inline int64_t GetOverrideHash() ;

/// @brief Method GetTerrainDescriptor, addr 0x180cd1680, size 0x40, virtual true, abstract: false, final false
inline ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor GetTerrainDescriptor() ;

static inline ::JBooth::MicroSplat::MicroSplatObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18061c0d0, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RevisionFromMat, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void RevisionFromMat() ;

/// @brief Method SetMap, addr 0x1814008f0, size 0x70, virtual false, abstract: false, final false
inline void SetMap(::UnityEngine::Material*  m, ::StringW  name, ::UnityEngine::Texture*  tex) ;

/// @brief Method SyncAll, addr 0x181400960, size 0xa0, virtual false, abstract: false, final false
static inline void SyncAll() ;

/// @brief Method SyncBlendMat, addr 0x181400a00, size 0x210, virtual false, abstract: false, final false
inline void SyncBlendMat(::UnityEngine::Vector3  size) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blendMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blendMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blendMatInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blendMatInstance() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_geoTextureOverride() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_geoTextureOverride() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_globalEmisOverride() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_globalEmisOverride() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_globalNormalOverride() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_globalNormalOverride() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_globalSAOMOverride() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_globalSAOMOverride() ;

constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatKeywords> const& __cordl_internal_get_keywordSO() const;

constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatKeywords>& __cordl_internal_get_keywordSO() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_matInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_matInstance() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_perPixelNormal() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_perPixelNormal() ;

constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatPropData> const& __cordl_internal_get_propData() const;

constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatPropData>& __cordl_internal_get_propData() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_streamTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_streamTexture() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_templateMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_templateMaterial() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_tintMapOverride() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_tintMapOverride() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_tintMapOverride2() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_tintMapOverride2() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_vsGrassMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_vsGrassMap() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_vsShadowMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_vsShadowMap() ;

constexpr void __cordl_internal_set_blendMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blendMatInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_geoTextureOverride(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_globalEmisOverride(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_globalNormalOverride(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_globalSAOMOverride(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_keywordSO(::UnityW<::JBooth::MicroSplat::MicroSplatKeywords>  value) ;

constexpr void __cordl_internal_set_matInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_perPixelNormal(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_propData(::UnityW<::JBooth::MicroSplat::MicroSplatPropData>  value) ;

constexpr void __cordl_internal_set_streamTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_templateMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_tintMapOverride(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_tintMapOverride2(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_vsGrassMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_vsShadowMap(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatObject(MicroSplatObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatObject(MicroSplatObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20808};

/// @brief Field templateMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___templateMaterial;

/// @brief Field matInstance, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___matInstance;

/// @brief Field blendMat, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blendMat;

/// @brief Field blendMatInstance, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blendMatInstance;

/// @brief Field keywordSO, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroSplat::MicroSplatKeywords>  ___keywordSO;

/// @brief Field perPixelNormal, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___perPixelNormal;

/// @brief Field streamTexture, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___streamTexture;

/// @brief Field tintMapOverride, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___tintMapOverride;

/// @brief Field tintMapOverride2, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___tintMapOverride2;

/// @brief Field globalNormalOverride, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___globalNormalOverride;

/// @brief Field globalSAOMOverride, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___globalSAOMOverride;

/// @brief Field globalEmisOverride, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___globalEmisOverride;

/// @brief Field geoTextureOverride, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___geoTextureOverride;

/// @brief Field vsGrassMap, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___vsGrassMap;

/// @brief Field vsShadowMap, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___vsShadowMap;

/// @brief Field propData, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroSplat::MicroSplatPropData>  ___propData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___templateMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___matInstance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___blendMat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___blendMatInstance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___keywordSO) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___perPixelNormal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___streamTexture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___tintMapOverride) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___tintMapOverride2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___globalNormalOverride) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___globalSAOMOverride) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___globalEmisOverride) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___geoTextureOverride) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___vsGrassMap) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___vsShadowMap) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatObject, ___propData) == 0x98, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatObject) == 0xa0, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
