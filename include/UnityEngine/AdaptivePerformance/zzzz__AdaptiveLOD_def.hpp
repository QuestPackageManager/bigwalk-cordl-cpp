#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptiveLOD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptiveLOD)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptiveLOD;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptiveLOD*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptiveLOD*, "UnityEngine.AdaptivePerformance", "AdaptiveLOD");
// Dependencies UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptiveLOD
class CORDL_TYPE AdaptiveLOD : public ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler {
public:
// Declarations
/// @brief Field m_DefaultLodBias, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultLodBias, put=__cordl_internal_set_m_DefaultLodBias)) float_t  m_DefaultLodBias;

/// @brief Method Awake, addr 0x1822163c0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::AdaptivePerformance::AdaptiveLOD* New_ctor() ;

/// @brief Method OnDisabled, addr 0x182216410, size 0x10, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x182216420, size 0x20, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnLevel, addr 0x182216440, size 0x50, virtual true, abstract: false, final false
inline void OnLevel() ;

constexpr float_t const& __cordl_internal_get_m_DefaultLodBias() const;

constexpr float_t& __cordl_internal_get_m_DefaultLodBias() ;

constexpr void __cordl_internal_set_m_DefaultLodBias(float_t  value) ;

/// @brief Method .ctor, addr 0x1822160a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveLOD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveLOD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveLOD(AdaptiveLOD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveLOD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveLOD(AdaptiveLOD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19445};

/// @brief Field m_DefaultLodBias, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_DefaultLodBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptiveLOD, ___m_DefaultLodBias) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptiveLOD) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
