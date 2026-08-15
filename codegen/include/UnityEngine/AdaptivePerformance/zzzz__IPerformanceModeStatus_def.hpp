#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IPerformanceModeStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPerformanceModeStatus)
namespace UnityEngine::AdaptivePerformance {
class PerformanceModeEventHandler;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class IPerformanceModeStatus;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::IPerformanceModeStatus*, "UnityEngine.AdaptivePerformance", "IPerformanceModeStatus");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.IPerformanceModeStatus
class CORDL_TYPE IPerformanceModeStatus {
public:
// Declarations
/// @brief Method add_PerformanceModeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value) ;

/// @brief Method remove_PerformanceModeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PerformanceModeEvent(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPerformanceModeStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPerformanceModeStatus(IPerformanceModeStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AdaptivePerformance
