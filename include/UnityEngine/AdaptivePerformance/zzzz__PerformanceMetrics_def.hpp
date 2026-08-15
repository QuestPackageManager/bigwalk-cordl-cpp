#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceMetrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__ClusterInfo_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceMetrics)
namespace UnityEngine::AdaptivePerformance {
struct ClusterInfo;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneck;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMetrics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::PerformanceMetrics);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceMetrics, "UnityEngine.AdaptivePerformance", "PerformanceMetrics");
// Dependencies UnityEngine.AdaptivePerformance.ClusterInfo, UnityEngine.AdaptivePerformance.PerformanceBottleneck
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.PerformanceMetrics
struct CORDL_TYPE PerformanceMetrics {
public:
// Declarations
 __declspec(property(get=get_ClusterInfo, put=set_ClusterInfo)) ::UnityEngine::AdaptivePerformance::ClusterInfo  ClusterInfo;

 __declspec(property(get=get_CpuPerformanceBoost, put=set_CpuPerformanceBoost)) bool  CpuPerformanceBoost;

 __declspec(property(get=get_CurrentCpuLevel, put=set_CurrentCpuLevel)) int32_t  CurrentCpuLevel;

 __declspec(property(get=get_CurrentGpuLevel, put=set_CurrentGpuLevel)) int32_t  CurrentGpuLevel;

 __declspec(property(get=get_GpuPerformanceBoost, put=set_GpuPerformanceBoost)) bool  GpuPerformanceBoost;

 __declspec(property(get=get_PerformanceBottleneck, put=set_PerformanceBottleneck)) ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  PerformanceBottleneck;

/// @brief Method get_ClusterInfo, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::ClusterInfo get_ClusterInfo() ;

/// @brief Method get_CpuPerformanceBoost, addr 0x1804e67e0, size 0x10, virtual false, abstract: false, final false
inline bool get_CpuPerformanceBoost() ;

/// @brief Method get_CurrentCpuLevel, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentCpuLevel() ;

/// @brief Method get_CurrentGpuLevel, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CurrentGpuLevel() ;

/// @brief Method get_GpuPerformanceBoost, addr 0x1822124d0, size 0x10, virtual false, abstract: false, final false
inline bool get_GpuPerformanceBoost() ;

/// @brief Method get_PerformanceBottleneck, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneck get_PerformanceBottleneck() ;

/// @brief Method set_ClusterInfo, addr 0x1805e10f0, size 0x70, virtual false, abstract: false, final false
inline void set_ClusterInfo(::UnityEngine::AdaptivePerformance::ClusterInfo  value) ;

/// @brief Method set_CpuPerformanceBoost, addr 0x1804e6800, size 0x10, virtual false, abstract: false, final false
inline void set_CpuPerformanceBoost(bool  value) ;

/// @brief Method set_CurrentCpuLevel, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentCpuLevel(int32_t  value) ;

/// @brief Method set_CurrentGpuLevel, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentGpuLevel(int32_t  value) ;

/// @brief Method set_GpuPerformanceBoost, addr 0x182212500, size 0x10, virtual false, abstract: false, final false
inline void set_GpuPerformanceBoost(bool  value) ;

/// @brief Method set_PerformanceBottleneck, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_PerformanceBottleneck(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceMetrics() ;

// Ctor Parameters [CppParam { name: "_CurrentCpuLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentGpuLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_PerformanceBottleneck_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceBottleneck", modifiers: "", def_value: None }, CppParam { name: "_CpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_GpuPerformanceBoost_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ClusterInfo_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::ClusterInfo", modifiers: "", def_value: None }]
constexpr PerformanceMetrics(int32_t  _CurrentCpuLevel_k__BackingField, int32_t  _CurrentGpuLevel_k__BackingField, ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  _PerformanceBottleneck_k__BackingField, bool  _CpuPerformanceBoost_k__BackingField, bool  _GpuPerformanceBoost_k__BackingField, ::UnityEngine::AdaptivePerformance::ClusterInfo  _ClusterInfo_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field <CurrentCpuLevel>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _CurrentCpuLevel_k__BackingField;

/// @brief Field <CurrentGpuLevel>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _CurrentGpuLevel_k__BackingField;

/// @brief Field <PerformanceBottleneck>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  _PerformanceBottleneck_k__BackingField;

/// @brief Field <CpuPerformanceBoost>k__BackingField, offset: 0xc, size: 0x1, def value: None
 bool  _CpuPerformanceBoost_k__BackingField;

/// @brief Field <GpuPerformanceBoost>k__BackingField, offset: 0xd, size: 0x1, def value: None
 bool  _GpuPerformanceBoost_k__BackingField;

/// @brief Field <ClusterInfo>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::AdaptivePerformance::ClusterInfo  _ClusterInfo_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMetrics, _CurrentCpuLevel_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMetrics, _CurrentGpuLevel_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMetrics, _PerformanceBottleneck_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMetrics, _CpuPerformanceBoost_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMetrics, _GpuPerformanceBoost_k__BackingField) == 0xd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMetrics, _ClusterInfo_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceMetrics) == 0x1c, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
