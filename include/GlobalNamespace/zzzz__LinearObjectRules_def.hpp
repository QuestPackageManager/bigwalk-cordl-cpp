#pragma once
// IWYU pragma private; include "GlobalNamespace/LinearObjectRules.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LinearObjectRules)
// Forward declare root types
namespace GlobalNamespace {
class LinearObjectRules;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LinearObjectRules*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LinearObjectRules*, "", "LinearObjectRules");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LinearObjectRules
class CORDL_TYPE LinearObjectRules : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field beginOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_beginOffset, put=__cordl_internal_set_beginOffset)) float_t  beginOffset;

/// @brief Field linearDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_linearDistance, put=__cordl_internal_set_linearDistance)) float_t  linearDistance;

static inline ::GlobalNamespace::LinearObjectRules* New_ctor() ;

constexpr float_t const& __cordl_internal_get_beginOffset() const;

constexpr float_t& __cordl_internal_get_beginOffset() ;

constexpr float_t const& __cordl_internal_get_linearDistance() const;

constexpr float_t& __cordl_internal_get_linearDistance() ;

constexpr void __cordl_internal_set_beginOffset(float_t  value) ;

constexpr void __cordl_internal_set_linearDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x181407680, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearObjectRules() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearObjectRules", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearObjectRules(LinearObjectRules && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearObjectRules", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearObjectRules(LinearObjectRules const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17897};

/// @brief Field linearDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___linearDistance;

/// @brief Field beginOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ___beginOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LinearObjectRules, ___linearDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearObjectRules, ___beginOffset) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LinearObjectRules) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
