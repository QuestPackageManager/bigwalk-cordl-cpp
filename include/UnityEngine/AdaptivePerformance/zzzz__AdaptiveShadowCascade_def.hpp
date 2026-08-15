#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveShadowCascade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptiveShadowCascade)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveShadowCascade;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveShadowCascade*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveShadowCascade*, "UnityEngine.AdaptivePerformance", "AdaptiveShadowCascade");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveShadowCascade
class CORDL_TYPE AdaptiveShadowCascade : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultCascadeCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultCascadeCount, put=__cordl_internal_set_m_DefaultCascadeCount)) int32_t  m_DefaultCascadeCount;

/// @brief Method Awake, addr 0x182223950, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveShadowCascade* New_ctor() ;

/// @brief Method OnDisabled, addr 0x1822239a0, size 0x20, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x1822239c0, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x1822239e0, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr int32_t const& __cordl_internal_get_m_DefaultCascadeCount() const;

constexpr int32_t& __cordl_internal_get_m_DefaultCascadeCount() ;

constexpr void __cordl_internal_set_m_DefaultCascadeCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveShadowCascade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveShadowCascade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveShadowCascade(AdaptiveShadowCascade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveShadowCascade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveShadowCascade(AdaptiveShadowCascade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19450};

/// @brief Field m_DefaultCascadeCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_DefaultCascadeCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveShadowCascade, ___m_DefaultCascadeCount) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveShadowCascade) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
