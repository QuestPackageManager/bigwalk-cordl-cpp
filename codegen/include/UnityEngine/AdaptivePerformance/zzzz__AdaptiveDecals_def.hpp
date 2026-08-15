#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveDecals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveDecals)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveDecals;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveDecals*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveDecals*, "UnityEngine.AdaptivePerformance", "AdaptiveDecals");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveDecals
class CORDL_TYPE AdaptiveDecals : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultDecalsDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultDecalsDistance, put=__cordl_internal_set_m_DefaultDecalsDistance)) float_t  m_DefaultDecalsDistance;

/// @brief Method Awake, addr 0x1822160b0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveDecals* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216100, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182216120, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182216140, size 0x70, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_DefaultDecalsDistance() const;

constexpr float_t& __cordl_internal_get_m_DefaultDecalsDistance() ;

constexpr void __cordl_internal_set_m_DefaultDecalsDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveDecals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveDecals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveDecals(AdaptiveDecals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveDecals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveDecals(AdaptiveDecals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19442};

/// @brief Field m_DefaultDecalsDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_DefaultDecalsDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveDecals, ___m_DefaultDecalsDistance) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveDecals) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
