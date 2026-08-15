#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineHeightGizmo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SplineHeightGizmo)
namespace UnityEngine::Splines {
class SplineContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineHeightGizmo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SplineHeightGizmo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineHeightGizmo*, "", "SplineHeightGizmo");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplineHeightGizmo
class CORDL_TYPE SplineHeightGizmo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field iterations, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterations, put=__cordl_internal_set_iterations)) int32_t  iterations;

/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field splineContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineContainer, put=__cordl_internal_set_splineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

static inline ::GlobalNamespace::SplineHeightGizmo* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x180415310, size 0x4b0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr int32_t const& __cordl_internal_get_iterations() const;

constexpr int32_t& __cordl_internal_get_iterations() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_splineContainer() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_splineContainer() ;

constexpr void __cordl_internal_set_iterations(int32_t  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

/// @brief Method .ctor, addr 0x1804157c0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineHeightGizmo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineHeightGizmo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineHeightGizmo(SplineHeightGizmo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineHeightGizmo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineHeightGizmo(SplineHeightGizmo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5137};

/// @brief Field splineContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___splineContainer;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field iterations, offset: 0x34, size: 0x4, def value: None
 int32_t  ___iterations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineHeightGizmo, ___splineContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineHeightGizmo, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineHeightGizmo, ___iterations) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineHeightGizmo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
