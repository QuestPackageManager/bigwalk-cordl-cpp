#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PegTileRenderer)
namespace GlobalNamespace {
class PegTileDataSet;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileRenderer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileRenderer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileRenderer*, "", "PegTileRenderer");
// Dependencies PropGroup, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileRenderer
class CORDL_TYPE PegTileRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _materialIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__materialIndex, put=__cordl_internal_set__materialIndex)) int32_t  _materialIndex;

/// @brief Field _materialInstance, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field glyphColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_glyphColor, put=__cordl_internal_set_glyphColor)) ::UnityEngine::Color  glyphColor;

/// @brief Field hasCustomGlyphColor, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCustomGlyphColor, put=__cordl_internal_set_hasCustomGlyphColor)) bool  hasCustomGlyphColor;

/// @brief Field hidden, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hidden, put=__cordl_internal_set_hidden)) bool  hidden;

/// @brief Field logVerbose, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field pegTileDataSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileDataSet, put=__cordl_internal_set_pegTileDataSet)) ::UnityW<::GlobalNamespace::PegTileDataSet>  pegTileDataSet;

/// @brief Field propGroup, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_propGroup, put=__cordl_internal_set_propGroup)) ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field targetRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  targetRenderer;

/// @brief Field targetSubmesh, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSubmesh, put=__cordl_internal_set_targetSubmesh)) int32_t  targetSubmesh;

/// @brief Method Awake, addr 0x180406610, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PegTileRenderer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180406680, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Refresh, addr 0x1804066b0, size 0x350, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method SetAndRefresh, addr 0x180406a00, size 0x10, virtual false, abstract: false, final false
inline void SetAndRefresh(::GlobalNamespace::PropGroup  propGroup) ;

constexpr int32_t const& __cordl_internal_get__materialIndex() const;

constexpr int32_t& __cordl_internal_get__materialIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_glyphColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_glyphColor() ;

constexpr bool const& __cordl_internal_get_hasCustomGlyphColor() const;

constexpr bool& __cordl_internal_get_hasCustomGlyphColor() ;

constexpr bool const& __cordl_internal_get_hidden() const;

constexpr bool& __cordl_internal_get_hidden() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& __cordl_internal_get_pegTileDataSet() const;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& __cordl_internal_get_pegTileDataSet() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_propGroup() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_propGroup() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr int32_t const& __cordl_internal_get_targetSubmesh() const;

constexpr int32_t& __cordl_internal_get_targetSubmesh() ;

constexpr void __cordl_internal_set__materialIndex(int32_t  value) ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_glyphColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_hasCustomGlyphColor(bool  value) ;

constexpr void __cordl_internal_set_hidden(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value) ;

constexpr void __cordl_internal_set_propGroup(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_targetSubmesh(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileRenderer(PegTileRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileRenderer(PegTileRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5092};

/// @brief Field pegTileDataSet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileDataSet>  ___pegTileDataSet;

/// @brief Field propGroup, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___propGroup;

/// @brief Field hidden, offset: 0x2c, size: 0x1, def value: None
 bool  ___hidden;

/// @brief Field hasCustomGlyphColor, offset: 0x2d, size: 0x1, def value: None
 bool  ___hasCustomGlyphColor;

/// @brief Field glyphColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___glyphColor;

/// @brief Field targetRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___targetRenderer;

/// @brief Field targetSubmesh, offset: 0x48, size: 0x4, def value: None
 int32_t  ___targetSubmesh;

/// @brief Field logVerbose, offset: 0x4c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _materialInstance, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

/// @brief Field _materialIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ____materialIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___pegTileDataSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___propGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___hidden) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___hasCustomGlyphColor) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___glyphColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___targetRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___targetSubmesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ___logVerbose) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ____materialInstance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileRenderer, ____materialIndex) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileRenderer) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
