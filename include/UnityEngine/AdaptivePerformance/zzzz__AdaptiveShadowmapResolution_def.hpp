#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveShadowmapResolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveShadowmapResolution)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveShadowmapResolution;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveShadowmapResolution*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveShadowmapResolution*, "UnityEngine.AdaptivePerformance", "AdaptiveShadowmapResolution");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveShadowmapResolution
class CORDL_TYPE AdaptiveShadowmapResolution : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultShadowmapResolution, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultShadowmapResolution, put=__cordl_internal_set_m_DefaultShadowmapResolution)) float_t  m_DefaultShadowmapResolution;

/// @brief Method Awake, addr 0x182223be0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveShadowmapResolution* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182223c30, size 0x10, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182223c40, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182223c60, size 0x40, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_DefaultShadowmapResolution() const;

constexpr float_t& __cordl_internal_get_m_DefaultShadowmapResolution() ;

constexpr void __cordl_internal_set_m_DefaultShadowmapResolution(float_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveShadowmapResolution() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveShadowmapResolution", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveShadowmapResolution(AdaptiveShadowmapResolution && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveShadowmapResolution", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveShadowmapResolution(AdaptiveShadowmapResolution const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19452};

/// @brief Field m_DefaultShadowmapResolution, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_DefaultShadowmapResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveShadowmapResolution, ___m_DefaultShadowmapResolution) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveShadowmapResolution) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
