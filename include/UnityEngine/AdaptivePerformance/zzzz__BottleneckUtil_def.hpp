#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/BottleneckUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BottleneckUtil)
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneck;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class BottleneckUtil;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::BottleneckUtil*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::BottleneckUtil*, "UnityEngine.AdaptivePerformance", "BottleneckUtil");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.BottleneckUtil
class CORDL_TYPE BottleneckUtil : public ::System::Object {
public:
// Declarations
/// @brief Method DetermineBottleneck, addr 0x182220d40, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneck DetermineBottleneck(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  prevBottleneck, float_t  averageCpuFrameTime, float_t  averageGpuFrametime, float_t  averageOverallFrametime, float_t  targetFrameTime) ;

/// @brief Method HittingFrameRateLimit, addr 0x182220eb0, size 0x30, virtual false, abstract: false, final false
static inline bool HittingFrameRateLimit(float_t  actualFrameTime, float_t  thresholdFactor, float_t  targetFrameTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BottleneckUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BottleneckUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BottleneckUtil(BottleneckUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BottleneckUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BottleneckUtil(BottleneckUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::BottleneckUtil) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
