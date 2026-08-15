#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveShadowDistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveShadowDistance)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveShadowDistance;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveShadowDistance*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveShadowDistance*, "UnityEngine.AdaptivePerformance", "AdaptiveShadowDistance");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveShadowDistance
class CORDL_TYPE AdaptiveShadowDistance : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultShadowDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultShadowDistance, put=__cordl_internal_set_m_DefaultShadowDistance)) float_t  m_DefaultShadowDistance;

/// @brief Method Awake, addr 0x182223a30, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveShadowDistance* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182223a80, size 0x10, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182223a90, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182223ab0, size 0x40, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_DefaultShadowDistance() const;

constexpr float_t& __cordl_internal_get_m_DefaultShadowDistance() ;

constexpr void __cordl_internal_set_m_DefaultShadowDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveShadowDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveShadowDistance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveShadowDistance(AdaptiveShadowDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveShadowDistance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveShadowDistance(AdaptiveShadowDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19451};

/// @brief Field m_DefaultShadowDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_DefaultShadowDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveShadowDistance, ___m_DefaultShadowDistance) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveShadowDistance) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
