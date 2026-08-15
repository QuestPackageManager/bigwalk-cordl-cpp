#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptivePhysics)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePhysics;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePhysics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePhysics*, "UnityEngine.AdaptivePerformance", "AdaptivePhysics");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePhysics
class CORDL_TYPE AdaptivePhysics : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_fixedDeltaTimeDefault, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_fixedDeltaTimeDefault, put=__cordl_internal_set_m_fixedDeltaTimeDefault)) float_t  m_fixedDeltaTimeDefault;

/// @brief Method Awake, addr 0x182223330, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePhysics* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182223380, size 0x10, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182223390, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x1822233b0, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_fixedDeltaTimeDefault() const;

constexpr float_t& __cordl_internal_get_m_fixedDeltaTimeDefault() ;

constexpr void __cordl_internal_set_m_fixedDeltaTimeDefault(float_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePhysics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePhysics(AdaptivePhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePhysics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePhysics(AdaptivePhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19448};

/// @brief Field m_fixedDeltaTimeDefault, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_fixedDeltaTimeDefault;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePhysics, ___m_fixedDeltaTimeDefault) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePhysics) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
