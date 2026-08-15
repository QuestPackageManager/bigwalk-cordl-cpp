#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HoleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__StampData_def.hpp"
CORDL_MODULE_EXPORT(HoleData)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class HoleData;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::HoleData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::HoleData*, "JBooth.MicroVerseCore", "HoleData");
// Dependencies JBooth.MicroVerseCore.StampData
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.HoleData
class CORDL_TYPE HoleData : public ::JBooth::MicroVerseCore::StampData {
public:
// Declarations
/// @brief Field curveMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_curveMap, put=__cordl_internal_set_curveMap)) ::UnityW<::UnityEngine::RenderTexture>  curveMap;

/// @brief Field flowMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowMap, put=__cordl_internal_set_flowMap)) ::UnityW<::UnityEngine::RenderTexture>  flowMap;

/// @brief Field heightMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightMap, put=__cordl_internal_set_heightMap)) ::UnityW<::UnityEngine::RenderTexture>  heightMap;

/// @brief Field indexMap, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexMap, put=__cordl_internal_set_indexMap)) ::UnityW<::UnityEngine::RenderTexture>  indexMap;

/// @brief Field normalMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalMap, put=__cordl_internal_set_normalMap)) ::UnityW<::UnityEngine::RenderTexture>  normalMap;

/// @brief Field placementMask, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_placementMask, put=__cordl_internal_set_placementMask)) ::UnityW<::UnityEngine::RenderTexture>  placementMask;

/// @brief Field weightMap, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_weightMap, put=__cordl_internal_set_weightMap)) ::UnityW<::UnityEngine::RenderTexture>  weightMap;

static inline ::JBooth::MicroVerseCore::HoleData* New_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  heightMap, ::UnityEngine::RenderTexture*  normalMap, ::UnityEngine::RenderTexture*  curveMap, ::UnityEngine::RenderTexture*  flowMap, ::UnityEngine::RenderTexture*  indexMap, ::UnityEngine::RenderTexture*  weightMap) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_curveMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_curveMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_flowMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_flowMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_heightMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_heightMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_indexMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_indexMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_normalMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_normalMap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_placementMask() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_placementMask() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_weightMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_weightMap() ;

constexpr void __cordl_internal_set_curveMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_flowMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_heightMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_indexMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_normalMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_placementMask(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_weightMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x181442100, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::RenderTexture*  heightMap, ::UnityEngine::RenderTexture*  normalMap, ::UnityEngine::RenderTexture*  curveMap, ::UnityEngine::RenderTexture*  flowMap, ::UnityEngine::RenderTexture*  indexMap, ::UnityEngine::RenderTexture*  weightMap) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HoleData(HoleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoleData(HoleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18044};

/// @brief Field heightMap, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___heightMap;

/// @brief Field normalMap, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___normalMap;

/// @brief Field curveMap, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___curveMap;

/// @brief Field flowMap, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___flowMap;

/// @brief Field placementMask, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___placementMask;

/// @brief Field indexMap, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___indexMap;

/// @brief Field weightMap, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___weightMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___heightMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___normalMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___curveMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___flowMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___placementMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___indexMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::HoleData, ___weightMap) == 0x48, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::HoleData) == 0x50, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
