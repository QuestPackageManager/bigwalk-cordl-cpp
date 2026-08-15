#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IPerformanceStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPerformanceStatus)
namespace UnityEngine::AdaptivePerformance {
struct FrameTiming;
}
namespace UnityEngine::AdaptivePerformance {
class PerformanceBottleneckChangeHandler;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMetrics;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IPerformanceStatus;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IPerformanceStatus*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IPerformanceStatus*, "UnityEngine.AdaptivePerformance", "IPerformanceStatus");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IPerformanceStatus
class CORDL_TYPE IPerformanceStatus {
public:
// Declarations
 __declspec(property(get=get_FrameTiming)) ::UnityEngine::AdaptivePerformance::FrameTiming  FrameTiming;

 __declspec(property(get=get_PerformanceMetrics)) ::UnityEngine::AdaptivePerformance::PerformanceMetrics  PerformanceMetrics;

/// @brief Method add_PerformanceBottleneckChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value) ;

/// @brief Method get_FrameTiming, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::FrameTiming get_FrameTiming() ;

/// @brief Method get_PerformanceMetrics, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::PerformanceMetrics get_PerformanceMetrics() ;

/// @brief Method remove_PerformanceBottleneckChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PerformanceBottleneckChangeEvent(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPerformanceStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPerformanceStatus(IPerformanceStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance
