#pragma once
// IWYU pragma private; include "Mirror/TimeSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSample)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Mirror {
struct TimeSample;
}
// Write type traits
MARK_VAL_T(::Mirror::TimeSample);
DEFINE_IL2CPP_CLASS(::Mirror::TimeSample, "Mirror", "TimeSample");
// Dependencies Mirror.ExponentialMovingAverage
namespace Mirror {
// Is value type: true
// CS Name: Mirror.TimeSample
struct CORDL_TYPE TimeSample {
public:
// Declarations
/// @brief Method Begin, addr 0x181598590, size 0x50, virtual false, abstract: false, final false
inline void Begin() ;

/// @brief Method End, addr 0x1815985e0, size 0xe0, virtual false, abstract: false, final false
inline void End() ;

/// @brief Method .ctor, addr 0x1815986c0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(int32_t  n) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSample() ;

// Ctor Parameters [CppParam { name: "watch", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "beginTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "ema", ty: "::Mirror::ExponentialMovingAverage", modifiers: "", def_value: None }, CppParam { name: "average", ty: "double_t", modifiers: "", def_value: None }]
constexpr TimeSample(::System::Diagnostics::Stopwatch*  watch, double_t  beginTime, ::Mirror::ExponentialMovingAverage  ema, double_t  average) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field watch, offset: 0x0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  watch;

/// @brief Field beginTime, offset: 0x8, size: 0x8, def value: None
 double_t  beginTime;

/// @brief Field ema, offset: 0x10, size: 0x28, def value: None
 ::Mirror::ExponentialMovingAverage  ema;

/// @brief Field average, offset: 0x38, size: 0x8, def value: None
 double_t  average;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TimeSample, watch) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::TimeSample, beginTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::TimeSample, ema) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::TimeSample, average) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::TimeSample) == 0x40, "Size mismatch!");

} // namespace end def Mirror
