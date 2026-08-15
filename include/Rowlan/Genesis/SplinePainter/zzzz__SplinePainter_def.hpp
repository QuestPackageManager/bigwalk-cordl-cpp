#pragma once
// IWYU pragma private; include "Rowlan/Genesis/SplinePainter/SplinePainter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplinePainter)
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace Rowlan::Genesis::SplinePainter {
class SplinePainter;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::SplinePainter::SplinePainter*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::SplinePainter::SplinePainter*, "Rowlan.Genesis.SplinePainter", "SplinePainter");
// Dependencies UnityEngine.MonoBehaviour
namespace Rowlan::Genesis::SplinePainter {
// Is value type: false
// CS Name: Rowlan.Genesis.SplinePainter.SplinePainter
class CORDL_TYPE SplinePainter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field container, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_container, put=__cordl_internal_set_container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  container;

/// @brief Field heightOffset, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightOffset, put=__cordl_internal_set_heightOffset)) float_t  heightOffset;

/// @brief Field pointReductionEpsilon, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_pointReductionEpsilon, put=__cordl_internal_set_pointReductionEpsilon)) float_t  pointReductionEpsilon;

/// @brief Field splineTension, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_splineTension, put=__cordl_internal_set_splineTension)) float_t  splineTension;

/// @brief Field strokeDeltaThreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_strokeDeltaThreshold, put=__cordl_internal_set_strokeDeltaThreshold)) float_t  strokeDeltaThreshold;

static inline ::Rowlan::Genesis::SplinePainter::SplinePainter* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_container() ;

constexpr float_t const& __cordl_internal_get_heightOffset() const;

constexpr float_t& __cordl_internal_get_heightOffset() ;

constexpr float_t const& __cordl_internal_get_pointReductionEpsilon() const;

constexpr float_t& __cordl_internal_get_pointReductionEpsilon() ;

constexpr float_t const& __cordl_internal_get_splineTension() const;

constexpr float_t& __cordl_internal_get_splineTension() ;

constexpr float_t const& __cordl_internal_get_strokeDeltaThreshold() const;

constexpr float_t& __cordl_internal_get_strokeDeltaThreshold() ;

constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_heightOffset(float_t  value) ;

constexpr void __cordl_internal_set_pointReductionEpsilon(float_t  value) ;

constexpr void __cordl_internal_set_splineTension(float_t  value) ;

constexpr void __cordl_internal_set_strokeDeltaThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x181abfa70, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePainter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePainter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePainter(SplinePainter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePainter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePainter(SplinePainter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20401};

/// @brief Field strokeDeltaThreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ___strokeDeltaThreshold;

/// @brief Field pointReductionEpsilon, offset: 0x24, size: 0x4, def value: None
 float_t  ___pointReductionEpsilon;

/// @brief Field splineTension, offset: 0x28, size: 0x4, def value: None
 float_t  ___splineTension;

/// @brief Field heightOffset, offset: 0x2c, size: 0x4, def value: None
 float_t  ___heightOffset;

/// @brief Field container, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___container;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::SplinePainter::SplinePainter, ___strokeDeltaThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::SplinePainter::SplinePainter, ___pointReductionEpsilon) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::SplinePainter::SplinePainter, ___splineTension) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::SplinePainter::SplinePainter, ___heightOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::SplinePainter::SplinePainter, ___container) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::SplinePainter::SplinePainter) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::Genesis::SplinePainter
