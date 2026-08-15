#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBoostChangeEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceBoostChangeEventArgs)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBoostChangeEventArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs, "UnityEngine.AdaptivePerformance", "PerformanceBoostChangeEventArgs");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.PerformanceBoostChangeEventArgs
struct CORDL_TYPE PerformanceBoostChangeEventArgs {
public:
// Declarations
 __declspec(property(get=get_CpuBoost, put=set_CpuBoost)) bool  CpuBoost;

 __declspec(property(get=get_GpuBoost, put=set_GpuBoost)) bool  GpuBoost;

/// @brief Method get_CpuBoost, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_CpuBoost() ;

/// @brief Method get_GpuBoost, addr 0x180438d00, size 0x20, virtual false, abstract: false, final false
inline bool get_GpuBoost() ;

/// @brief Method set_CpuBoost, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_CpuBoost(bool  value) ;

/// @brief Method set_GpuBoost, addr 0x1805ed730, size 0x10, virtual false, abstract: false, final false
inline void set_GpuBoost(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceBoostChangeEventArgs() ;

// Ctor Parameters [CppParam { name: "_CpuBoost_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_GpuBoost_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr PerformanceBoostChangeEventArgs(bool  _CpuBoost_k__BackingField, bool  _GpuBoost_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field <CpuBoost>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _CpuBoost_k__BackingField;

/// @brief Field <GpuBoost>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _GpuBoost_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs, _CpuBoost_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs, _GpuBoost_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs) == 0x2, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
