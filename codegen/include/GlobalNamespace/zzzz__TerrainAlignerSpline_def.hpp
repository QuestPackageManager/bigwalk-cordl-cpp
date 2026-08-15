#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainAlignerSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TerrainAlignerSpline)
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class TerrainAlignerSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TerrainAlignerSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainAlignerSpline*, "", "TerrainAlignerSpline");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerrainAlignerSpline
class CORDL_TYPE TerrainAlignerSpline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field SplineContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SplineContainer, put=__cordl_internal_set_SplineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  SplineContainer;

/// @brief Field downhillOffset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_downhillOffset, put=__cordl_internal_set_downhillOffset)) float_t  downhillOffset;

static inline ::GlobalNamespace::TerrainAlignerSpline* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_SplineContainer() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_SplineContainer() ;

constexpr float_t const& __cordl_internal_get_downhillOffset() const;

constexpr float_t& __cordl_internal_get_downhillOffset() ;

constexpr void __cordl_internal_set_SplineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_downhillOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainAlignerSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainAlignerSpline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainAlignerSpline(TerrainAlignerSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainAlignerSpline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainAlignerSpline(TerrainAlignerSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4926};

/// @brief Field SplineContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___SplineContainer;

/// @brief Field downhillOffset, offset: 0x28, size: 0x4, def value: None
 float_t  ___downhillOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TerrainAlignerSpline, ___SplineContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TerrainAlignerSpline, ___downhillOffset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TerrainAlignerSpline) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
