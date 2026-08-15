#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IThermalStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IThermalStatus)
namespace UnityEngine::AdaptivePerformance {
struct ThermalMetrics;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IThermalStatus;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IThermalStatus*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IThermalStatus*, "UnityEngine.AdaptivePerformance", "IThermalStatus");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IThermalStatus
class CORDL_TYPE IThermalStatus {
public:
// Declarations
 __declspec(property(get=get_ThermalMetrics)) ::UnityEngine::AdaptivePerformance::ThermalMetrics  ThermalMetrics;

/// @brief Method get_ThermalMetrics, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ThermalMetrics get_ThermalMetrics() ;

// Ctor Parameters [CppParam { name: "", ty: "IThermalStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IThermalStatus(IThermalStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance
