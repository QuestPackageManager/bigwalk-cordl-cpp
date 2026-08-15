#pragma once
// IWYU pragma private; include "Mirror/ExponentialMovingAverage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExponentialMovingAverage)
// Forward declare root types
namespace Mirror {
struct ExponentialMovingAverage;
}
// Write type traits
MARK_VAL_T(::Mirror::ExponentialMovingAverage);
DEFINE_IL2CPP_CLASS(::Mirror::ExponentialMovingAverage, "Mirror", "ExponentialMovingAverage");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.ExponentialMovingAverage
struct CORDL_TYPE ExponentialMovingAverage {
public:
// Declarations
/// @brief Method Add, addr 0x181590aa0, size 0xa0, virtual false, abstract: false, final false
inline void Add(double_t  newValue) ;

/// @brief Method Reset, addr 0x181590b40, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x181590b60, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  n) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExponentialMovingAverage() ;

// Ctor Parameters [CppParam { name: "alpha", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "initialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Variance", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "StandardDeviation", ty: "double_t", modifiers: "", def_value: None }]
constexpr ExponentialMovingAverage(double_t  alpha, bool  initialized, double_t  Value, double_t  Variance, double_t  StandardDeviation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field alpha, offset: 0x0, size: 0x8, def value: None
 double_t  alpha;

/// @brief Field initialized, offset: 0x8, size: 0x1, def value: None
 bool  initialized;

/// @brief Field Value, offset: 0x10, size: 0x8, def value: None
 double_t  Value;

/// @brief Field Variance, offset: 0x18, size: 0x8, def value: None
 double_t  Variance;

/// @brief Field StandardDeviation, offset: 0x20, size: 0x8, def value: None
 double_t  StandardDeviation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::ExponentialMovingAverage, alpha) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::ExponentialMovingAverage, initialized) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::ExponentialMovingAverage, Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::ExponentialMovingAverage, Variance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::ExponentialMovingAverage, StandardDeviation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::ExponentialMovingAverage) == 0x28, "Size mismatch!");

} // namespace end def Mirror
