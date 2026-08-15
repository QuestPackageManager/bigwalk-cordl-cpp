#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__StampData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DetailData)
namespace JBooth::MicroVerseCore {
class MicroVerse_DataCache;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class DetailData;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::DetailData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::DetailData*, "JBooth.MicroVerseCore", "DetailData");
// Dependencies JBooth.MicroVerseCore.StampData
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.DetailData
class CORDL_TYPE DetailData : public ::JBooth::MicroVerseCore::StampData {
public:
// Declarations
/// @brief Field clearMap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_clearMap, put=__cordl_internal_set_clearMap)) ::UnityW<::UnityEngine::RenderTexture>  clearMap;

/// @brief Field curveMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_curveMap, put=__cordl_internal_set_curveMap)) ::UnityW<::UnityEngine::RenderTexture>  curveMap;

/// @brief Field dataCache, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataCache, put=__cordl_internal_set_dataCache)) ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache;

/// @brief Field flowMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowMap, put=__cordl_internal_set_flowMap)) ::UnityW<::UnityEngine::RenderTexture>  flowMap;

/// @brief Field heightMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightMap, put=__cordl_internal_set_heightMap)) ::UnityW<::UnityEngine::RenderTexture>  heightMap;

/// @brief Field layerIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerIndex, put=__cordl_internal_set_layerIndex)) int32_t  layerIndex;

/// @brief Field normalMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalMap, put=__cordl_internal_set_normalMap)) ::UnityW<::UnityEngine::RenderTexture>  normalMap;

static inline ::JBooth::MicroVerseCore::DetailData* New_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  height, ::UnityEngine::RenderTexture*  normal, ::UnityEngine::RenderTexture*  curve, ::UnityEngine::RenderTexture*  flow, ::UnityEngine::RenderTexture*  clearMap, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_clearMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_clearMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_curveMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_curveMap() ;

constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache* const& __cordl_internal_get_dataCache() const;

constexpr ::JBooth::MicroVerseCore::MicroVerse_DataCache*& __cordl_internal_get_dataCache() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_flowMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_flowMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_heightMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_heightMap() ;

constexpr int32_t const& __cordl_internal_get_layerIndex() const;

constexpr int32_t& __cordl_internal_get_layerIndex() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_normalMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_normalMap() ;

constexpr void __cordl_internal_set_clearMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_curveMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_dataCache(::JBooth::MicroVerseCore::MicroVerse_DataCache*  value) ;

constexpr void __cordl_internal_set_flowMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_heightMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_layerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_normalMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x18141b770, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  height, ::UnityEngine::RenderTexture*  normal, ::UnityEngine::RenderTexture*  curve, ::UnityEngine::RenderTexture*  flow, ::UnityEngine::RenderTexture*  clearMap, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailData(DetailData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailData(DetailData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17983};

/// @brief Field heightMap, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___heightMap;

/// @brief Field normalMap, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___normalMap;

/// @brief Field curveMap, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___curveMap;

/// @brief Field flowMap, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___flowMap;

/// @brief Field clearMap, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___clearMap;

/// @brief Field dataCache, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::MicroVerse_DataCache*  ___dataCache;

/// @brief Field layerIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___layerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___heightMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___normalMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___curveMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___flowMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___clearMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___dataCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailData, ___layerIndex) == 0x48, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::DetailData) == 0x50, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
