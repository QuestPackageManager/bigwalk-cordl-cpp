#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceLevelChangeEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceControlMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceLevelChangeEventArgs)
namespace UnityEngine::AdaptivePerformance {
struct PerformanceControlMode;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct PerformanceLevelChangeEventArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, "UnityEngine.AdaptivePerformance", "PerformanceLevelChangeEventArgs");
// Dependencies UnityEngine.AdaptivePerformance.PerformanceControlMode
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.PerformanceLevelChangeEventArgs
struct CORDL_TYPE PerformanceLevelChangeEventArgs {
public:
// Declarations
 __declspec(property(get=get_CpuLevel, put=set_CpuLevel)) int32_t  CpuLevel;

 __declspec(property(get=get_CpuLevelDelta, put=set_CpuLevelDelta)) int32_t  CpuLevelDelta;

 __declspec(property(get=get_GpuLevel, put=set_GpuLevel)) int32_t  GpuLevel;

 __declspec(property(get=get_GpuLevelDelta, put=set_GpuLevelDelta)) int32_t  GpuLevelDelta;

 __declspec(property(get=get_ManualOverride, put=set_ManualOverride)) bool  ManualOverride;

 __declspec(property(get=get_PerformanceControlMode, put=set_PerformanceControlMode)) ::UnityEngine::AdaptivePerformance::PerformanceControlMode  PerformanceControlMode;

/// @brief Method get_CpuLevel, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CpuLevel() ;

/// @brief Method get_CpuLevelDelta, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CpuLevelDelta() ;

/// @brief Method get_GpuLevel, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_GpuLevel() ;

/// @brief Method get_GpuLevelDelta, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_GpuLevelDelta() ;

/// @brief Method get_ManualOverride, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool get_ManualOverride() ;

/// @brief Method get_PerformanceControlMode, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::PerformanceControlMode get_PerformanceControlMode() ;

/// @brief Method set_CpuLevel, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_CpuLevel(int32_t  value) ;

/// @brief Method set_CpuLevelDelta, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_CpuLevelDelta(int32_t  value) ;

/// @brief Method set_GpuLevel, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_GpuLevel(int32_t  value) ;

/// @brief Method set_GpuLevelDelta, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_GpuLevelDelta(int32_t  value) ;

/// @brief Method set_ManualOverride, addr 0x18039e7c0, size 0x10, virtual false, abstract: false, final false
inline void set_ManualOverride(bool  value) ;

/// @brief Method set_PerformanceControlMode, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_PerformanceControlMode(::UnityEngine::AdaptivePerformance::PerformanceControlMode  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceLevelChangeEventArgs() ;

// Ctor Parameters [CppParam { name: "_CpuLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_CpuLevelDelta_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_GpuLevel_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_GpuLevelDelta_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_PerformanceControlMode_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceControlMode", modifiers: "", def_value: None }, CppParam { name: "_ManualOverride_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr PerformanceLevelChangeEventArgs(int32_t  _CpuLevel_k__BackingField, int32_t  _CpuLevelDelta_k__BackingField, int32_t  _GpuLevel_k__BackingField, int32_t  _GpuLevelDelta_k__BackingField, ::UnityEngine::AdaptivePerformance::PerformanceControlMode  _PerformanceControlMode_k__BackingField, bool  _ManualOverride_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <CpuLevel>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _CpuLevel_k__BackingField;

/// @brief Field <CpuLevelDelta>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _CpuLevelDelta_k__BackingField;

/// @brief Field <GpuLevel>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _GpuLevel_k__BackingField;

/// @brief Field <GpuLevelDelta>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _GpuLevelDelta_k__BackingField;

/// @brief Field <PerformanceControlMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceControlMode  _PerformanceControlMode_k__BackingField;

/// @brief Field <ManualOverride>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  _ManualOverride_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, _CpuLevel_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, _CpuLevelDelta_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, _GpuLevel_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, _GpuLevelDelta_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, _PerformanceControlMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs, _ManualOverride_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
