#pragma once
// IWYU pragma private; include "Animancer/Examples/OrbitControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OrbitControls)
// Forward declare root types
namespace Animancer::Examples {
class OrbitControls;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::OrbitControls*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::OrbitControls*, "Animancer.Examples", "OrbitControls");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Animancer::Examples {
// Is value type: false
// CS Name: Animancer.Examples.OrbitControls
class CORDL_TYPE OrbitControls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Distance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Distance, put=__cordl_internal_set__Distance)) float_t  _Distance;

/// @brief Field _FocalPoint, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__FocalPoint, put=__cordl_internal_set__FocalPoint)) ::UnityEngine::Vector3  _FocalPoint;

/// @brief Field _MinZoom, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinZoom, put=__cordl_internal_set__MinZoom)) float_t  _MinZoom;

/// @brief Field _Sensitivity, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__Sensitivity, put=__cordl_internal_set__Sensitivity)) ::UnityEngine::Vector3  _Sensitivity;

/// @brief Method Awake, addr 0x1802ffc30, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::OrbitControls* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802ffd00, size 0x90, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Update, addr 0x1802ffe60, size 0x2b0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePosition, addr 0x1802ffd90, size 0xd0, virtual false, abstract: false, final false
inline void UpdatePosition() ;

constexpr float_t const& __cordl_internal_get__Distance() const;

constexpr float_t& __cordl_internal_get__Distance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__FocalPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__FocalPoint() ;

constexpr float_t const& __cordl_internal_get__MinZoom() const;

constexpr float_t& __cordl_internal_get__MinZoom() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Sensitivity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Sensitivity() ;

constexpr void __cordl_internal_set__Distance(float_t  value) ;

constexpr void __cordl_internal_set__FocalPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__MinZoom(float_t  value) ;

constexpr void __cordl_internal_set__Sensitivity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x180300110, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrbitControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrbitControls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrbitControls(OrbitControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrbitControls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrbitControls(OrbitControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19953};

/// @brief Field _FocalPoint, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____FocalPoint;

/// @brief Field _Sensitivity, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Sensitivity;

/// @brief Field _MinZoom, offset: 0x38, size: 0x4, def value: None
 float_t  ____MinZoom;

/// @brief Field _Distance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____Distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::OrbitControls, ____FocalPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::OrbitControls, ____Sensitivity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::OrbitControls, ____MinZoom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::OrbitControls, ____Distance) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::OrbitControls) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples
