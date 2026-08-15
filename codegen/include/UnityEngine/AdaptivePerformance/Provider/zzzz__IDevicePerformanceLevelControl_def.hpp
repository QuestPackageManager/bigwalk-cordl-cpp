#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Provider/IDevicePerformanceLevelControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDevicePerformanceLevelControl)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance::Provider {
class IDevicePerformanceLevelControl;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*, "UnityEngine.AdaptivePerformance.Provider", "IDevicePerformanceLevelControl");
// Dependencies 
namespace UnityEngine::AdaptivePerformance::Provider {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.Provider.IDevicePerformanceLevelControl
class CORDL_TYPE IDevicePerformanceLevelControl {
public:
// Declarations
 __declspec(property(get=get_MaxCpuPerformanceLevel)) int32_t  MaxCpuPerformanceLevel;

 __declspec(property(get=get_MaxGpuPerformanceLevel)) int32_t  MaxGpuPerformanceLevel;

/// @brief Method EnableCpuBoost, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EnableCpuBoost() ;

/// @brief Method EnableGpuBoost, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EnableGpuBoost() ;

/// @brief Method SetPerformanceLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool SetPerformanceLevel(::by_ref<int32_t>  cpu, ::by_ref<int32_t>  gpu) ;

/// @brief Method get_MaxCpuPerformanceLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaxCpuPerformanceLevel() ;

/// @brief Method get_MaxGpuPerformanceLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaxGpuPerformanceLevel() ;

// Ctor Parameters [CppParam { name: "", ty: "IDevicePerformanceLevelControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDevicePerformanceLevelControl(IDevicePerformanceLevelControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance::Provider
