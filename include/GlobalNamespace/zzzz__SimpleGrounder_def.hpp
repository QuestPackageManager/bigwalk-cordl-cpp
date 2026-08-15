#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleGrounder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleGrounder)
// Forward declare root types
namespace GlobalNamespace {
class SimpleGrounder;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleGrounder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleGrounder*, "", "SimpleGrounder");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleGrounder
class CORDL_TYPE SimpleGrounder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hit, offset 0x2c, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

/// @brief Field layerMask, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field maxRotation, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRotation, put=__cordl_internal_set_maxRotation)) float_t  maxRotation;

/// @brief Field maxTranslation, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTranslation, put=__cordl_internal_set_maxTranslation)) float_t  maxTranslation;

/// @brief Field rayCastLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastLength, put=__cordl_internal_set_rayCastLength)) float_t  rayCastLength;

/// @brief Field rayCastOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastOffset, put=__cordl_internal_set_rayCastOffset)) float_t  rayCastOffset;

/// @brief Field rotateFoot, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotateFoot, put=__cordl_internal_set_rotateFoot)) bool  rotateFoot;

/// @brief Field translateFoot, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_translateFoot, put=__cordl_internal_set_translateFoot)) bool  translateFoot;

/// @brief Method LateUpdate, addr 0x1803efff0, size 0x3a0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SimpleGrounder* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803f0390, size 0x170, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr float_t const& __cordl_internal_get_maxRotation() const;

constexpr float_t& __cordl_internal_get_maxRotation() ;

constexpr float_t const& __cordl_internal_get_maxTranslation() const;

constexpr float_t& __cordl_internal_get_maxTranslation() ;

constexpr float_t const& __cordl_internal_get_rayCastLength() const;

constexpr float_t& __cordl_internal_get_rayCastLength() ;

constexpr float_t const& __cordl_internal_get_rayCastOffset() const;

constexpr float_t& __cordl_internal_get_rayCastOffset() ;

constexpr bool const& __cordl_internal_get_rotateFoot() const;

constexpr bool& __cordl_internal_get_rotateFoot() ;

constexpr bool const& __cordl_internal_get_translateFoot() const;

constexpr bool& __cordl_internal_get_translateFoot() ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxRotation(float_t  value) ;

constexpr void __cordl_internal_set_maxTranslation(float_t  value) ;

constexpr void __cordl_internal_set_rayCastLength(float_t  value) ;

constexpr void __cordl_internal_set_rayCastOffset(float_t  value) ;

constexpr void __cordl_internal_set_rotateFoot(bool  value) ;

constexpr void __cordl_internal_set_translateFoot(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleGrounder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleGrounder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleGrounder(SimpleGrounder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleGrounder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleGrounder(SimpleGrounder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4968};

/// @brief Field layerMask, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field rayCastOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ___rayCastOffset;

/// @brief Field rayCastLength, offset: 0x28, size: 0x4, def value: None
 float_t  ___rayCastLength;

/// @brief Field hit, offset: 0x2c, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

/// @brief Field maxRotation, offset: 0x58, size: 0x4, def value: None
 float_t  ___maxRotation;

/// @brief Field maxTranslation, offset: 0x5c, size: 0x4, def value: None
 float_t  ___maxTranslation;

/// @brief Field rotateFoot, offset: 0x60, size: 0x1, def value: None
 bool  ___rotateFoot;

/// @brief Field translateFoot, offset: 0x61, size: 0x1, def value: None
 bool  ___translateFoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___layerMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___rayCastOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___rayCastLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___hit) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___maxRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___maxTranslation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___rotateFoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleGrounder, ___translateFoot) == 0x61, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleGrounder) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
