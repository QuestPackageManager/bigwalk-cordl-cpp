#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IDevicePerformanceControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDevicePerformanceControl)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IDevicePerformanceControl;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*, "UnityEngine.AdaptivePerformance", "IDevicePerformanceControl");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IDevicePerformanceControl
class CORDL_TYPE IDevicePerformanceControl {
public:
// Declarations
 __declspec(property(get=get_CpuLevel, put=set_CpuLevel)) int32_t  CpuLevel;

 __declspec(property(get=get_GpuLevel, put=set_GpuLevel)) int32_t  GpuLevel;

 __declspec(property(get=get_MaxCpuPerformanceLevel)) int32_t  MaxCpuPerformanceLevel;

 __declspec(property(get=get_MaxGpuPerformanceLevel)) int32_t  MaxGpuPerformanceLevel;

/// @brief Method get_CpuLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_CpuLevel() ;

/// @brief Method get_GpuLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_GpuLevel() ;

/// @brief Method get_MaxCpuPerformanceLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaxCpuPerformanceLevel() ;

/// @brief Method get_MaxGpuPerformanceLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaxGpuPerformanceLevel() ;

/// @brief Method set_CpuLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_CpuLevel(int32_t  value) ;

/// @brief Method set_GpuLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_GpuLevel(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDevicePerformanceControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDevicePerformanceControl(IDevicePerformanceControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance
