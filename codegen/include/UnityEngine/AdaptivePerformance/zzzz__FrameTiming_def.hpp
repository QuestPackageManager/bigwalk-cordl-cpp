#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/FrameTiming.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FrameTiming)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct FrameTiming;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::FrameTiming);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::FrameTiming, "UnityEngine.AdaptivePerformance", "FrameTiming");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.FrameTiming
struct CORDL_TYPE FrameTiming {
public:
// Declarations
 __declspec(property(get=get_AverageCpuFrameTime, put=set_AverageCpuFrameTime)) float_t  AverageCpuFrameTime;

 __declspec(property(get=get_AverageFrameTime, put=set_AverageFrameTime)) float_t  AverageFrameTime;

 __declspec(property(get=get_AverageGpuFrameTime, put=set_AverageGpuFrameTime)) float_t  AverageGpuFrameTime;

 __declspec(property(get=get_CurrentCpuFrameTime, put=set_CurrentCpuFrameTime)) float_t  CurrentCpuFrameTime;

 __declspec(property(get=get_CurrentFrameTime, put=set_CurrentFrameTime)) float_t  CurrentFrameTime;

 __declspec(property(get=get_CurrentGpuFrameTime, put=set_CurrentGpuFrameTime)) float_t  CurrentGpuFrameTime;

/// @brief Method get_AverageCpuFrameTime, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_AverageCpuFrameTime() ;

/// @brief Method get_AverageFrameTime, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_AverageFrameTime() ;

/// @brief Method get_AverageGpuFrameTime, addr 0x180303b30, size 0x10, virtual false, abstract: false, final false
inline float_t get_AverageGpuFrameTime() ;

/// @brief Method get_CurrentCpuFrameTime, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentCpuFrameTime() ;

/// @brief Method get_CurrentFrameTime, addr 0x1802d56c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentFrameTime() ;

/// @brief Method get_CurrentGpuFrameTime, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_CurrentGpuFrameTime() ;

/// @brief Method set_AverageCpuFrameTime, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_AverageCpuFrameTime(float_t  value) ;

/// @brief Method set_AverageFrameTime, addr 0x18051ead0, size 0x10, virtual false, abstract: false, final false
inline void set_AverageFrameTime(float_t  value) ;

/// @brief Method set_AverageGpuFrameTime, addr 0x18051eaf0, size 0x10, virtual false, abstract: false, final false
inline void set_AverageGpuFrameTime(float_t  value) ;

/// @brief Method set_CurrentCpuFrameTime, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentCpuFrameTime(float_t  value) ;

/// @brief Method set_CurrentFrameTime, addr 0x18051eac0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentFrameTime(float_t  value) ;

/// @brief Method set_CurrentGpuFrameTime, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentGpuFrameTime(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrameTiming() ;

// Ctor Parameters [CppParam { name: "_CurrentFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_AverageFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentGpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_AverageGpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentCpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_AverageCpuFrameTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr FrameTiming(float_t  _CurrentFrameTime_k__BackingField, float_t  _AverageFrameTime_k__BackingField, float_t  _CurrentGpuFrameTime_k__BackingField, float_t  _AverageGpuFrameTime_k__BackingField, float_t  _CurrentCpuFrameTime_k__BackingField, float_t  _AverageCpuFrameTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <CurrentFrameTime>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _CurrentFrameTime_k__BackingField;

/// @brief Field <AverageFrameTime>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _AverageFrameTime_k__BackingField;

/// @brief Field <CurrentGpuFrameTime>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _CurrentGpuFrameTime_k__BackingField;

/// @brief Field <AverageGpuFrameTime>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _AverageGpuFrameTime_k__BackingField;

/// @brief Field <CurrentCpuFrameTime>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  _CurrentCpuFrameTime_k__BackingField;

/// @brief Field <AverageCpuFrameTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  _AverageCpuFrameTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::FrameTiming, _CurrentFrameTime_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::FrameTiming, _AverageFrameTime_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::FrameTiming, _CurrentGpuFrameTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::FrameTiming, _AverageGpuFrameTime_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::FrameTiming, _CurrentCpuFrameTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::FrameTiming, _AverageCpuFrameTime_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::FrameTiming) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
