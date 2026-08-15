#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBottleneckChangeEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceBottleneck_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceBottleneckChangeEventArgs)
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneck;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneckChangeEventArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs, "UnityEngine.AdaptivePerformance", "PerformanceBottleneckChangeEventArgs");
// Dependencies UnityEngine.AdaptivePerformance.PerformanceBottleneck
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.PerformanceBottleneckChangeEventArgs
struct CORDL_TYPE PerformanceBottleneckChangeEventArgs {
public:
// Declarations
 __declspec(property(get=get_PerformanceBottleneck, put=set_PerformanceBottleneck)) ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  PerformanceBottleneck;

/// @brief Method get_PerformanceBottleneck, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneck get_PerformanceBottleneck() ;

/// @brief Method set_PerformanceBottleneck, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_PerformanceBottleneck(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceBottleneckChangeEventArgs() ;

// Ctor Parameters [CppParam { name: "_PerformanceBottleneck_k__BackingField", ty: "::UnityEngine::AdaptivePerformance::PerformanceBottleneck", modifiers: "", def_value: None }]
constexpr PerformanceBottleneckChangeEventArgs(::UnityEngine::AdaptivePerformance::PerformanceBottleneck  _PerformanceBottleneck_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <PerformanceBottleneck>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::AdaptivePerformance::PerformanceBottleneck  _PerformanceBottleneck_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs, _PerformanceBottleneck_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
