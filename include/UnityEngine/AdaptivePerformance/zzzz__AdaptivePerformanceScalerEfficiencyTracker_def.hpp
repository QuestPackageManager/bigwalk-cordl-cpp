#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceScalerEfficiencyTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdaptivePerformanceScalerEfficiencyTracker)
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScaler;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceScalerEfficiencyTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceScalerEfficiencyTracker");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerEfficiencyTracker
class CORDL_TYPE AdaptivePerformanceScalerEfficiencyTracker : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsRunning)) bool  IsRunning;

/// @brief Field m_IsApplied, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsApplied, put=__cordl_internal_set_m_IsApplied)) bool  m_IsApplied;

/// @brief Field m_LastAverageCpuFrameTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastAverageCpuFrameTime, put=__cordl_internal_set_m_LastAverageCpuFrameTime)) float_t  m_LastAverageCpuFrameTime;

/// @brief Field m_LastAverageGpuFrameTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastAverageGpuFrameTime, put=__cordl_internal_set_m_LastAverageGpuFrameTime)) float_t  m_LastAverageGpuFrameTime;

/// @brief Field m_Scaler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Scaler, put=__cordl_internal_set_m_Scaler)) ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>  m_Scaler;

static inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker* New_ctor() ;

/// @brief Method Start, addr 0x18221db30, size 0xe0, virtual false, abstract: false, final false
inline void Start(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler, bool  isApply) ;

/// @brief Method Stop, addr 0x18221dc10, size 0x100, virtual false, abstract: false, final false
inline void Stop() ;

constexpr bool const& __cordl_internal_get_m_IsApplied() const;

constexpr bool& __cordl_internal_get_m_IsApplied() ;

constexpr float_t const& __cordl_internal_get_m_LastAverageCpuFrameTime() const;

constexpr float_t& __cordl_internal_get_m_LastAverageCpuFrameTime() ;

constexpr float_t const& __cordl_internal_get_m_LastAverageGpuFrameTime() const;

constexpr float_t& __cordl_internal_get_m_LastAverageGpuFrameTime() ;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler> const& __cordl_internal_get_m_Scaler() const;

constexpr ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>& __cordl_internal_get_m_Scaler() ;

constexpr void __cordl_internal_set_m_IsApplied(bool  value) ;

constexpr void __cordl_internal_set_m_LastAverageCpuFrameTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LastAverageGpuFrameTime(float_t  value) ;

constexpr void __cordl_internal_set_m_Scaler(::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsRunning, addr 0x180e979d0, size 0x7e0, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceScalerEfficiencyTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerEfficiencyTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceScalerEfficiencyTracker(AdaptivePerformanceScalerEfficiencyTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceScalerEfficiencyTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceScalerEfficiencyTracker(AdaptivePerformanceScalerEfficiencyTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19403};

/// @brief Field m_Scaler, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>  ___m_Scaler;

/// @brief Field m_LastAverageGpuFrameTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_LastAverageGpuFrameTime;

/// @brief Field m_LastAverageCpuFrameTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_LastAverageCpuFrameTime;

/// @brief Field m_IsApplied, offset: 0x20, size: 0x1, def value: None
 bool  ___m_IsApplied;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker, ___m_Scaler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker, ___m_LastAverageGpuFrameTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker, ___m_LastAverageCpuFrameTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker, ___m_IsApplied) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
