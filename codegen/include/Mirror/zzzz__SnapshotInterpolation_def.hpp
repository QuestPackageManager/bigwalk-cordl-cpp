#pragma once
// IWYU pragma private; include "Mirror/SnapshotInterpolation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapshotInterpolation)
namespace Mirror {
struct ExponentialMovingAverage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
// Forward declare root types
namespace Mirror {
class SnapshotInterpolation;
}
// Write type traits
MARK_REF_T(::Mirror::SnapshotInterpolation*);
DEFINE_IL2CPP_CLASS(::Mirror::SnapshotInterpolation*, "Mirror", "SnapshotInterpolation");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SnapshotInterpolation
class CORDL_TYPE SnapshotInterpolation : public ::System::Object {
public:
// Declarations
/// @brief Method DynamicAdjustment, addr 0x181597ff0, size 0x20, virtual false, abstract: false, final false
static inline double_t DynamicAdjustment(double_t  sendInterval, double_t  jitterStandardDeviation, double_t  dynamicAdjustmentTolerance) ;

/// @brief Method InsertAndAdjust, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void InsertAndAdjust(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, T  snapshot, ::by_ref<double_t>  localTimeline, ::by_ref<double_t>  localTimescale, float_t  sendInterval, double_t  bufferTime, double_t  catchupSpeed, double_t  slowdownSpeed, ::by_ref<::Mirror::ExponentialMovingAverage>  driftEma, float_t  catchupNegativeThreshold, float_t  catchupPositiveThreshold, ::by_ref<::Mirror::ExponentialMovingAverage>  deliveryTimeEma) ;

/// @brief Method InsertIfNotExists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool InsertIfNotExists(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, T  snapshot) ;

/// @brief Method Sample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Sample(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, double_t  localTimeline, ::by_ref<int32_t>  from, ::by_ref<int32_t>  to, ::by_ref<double_t>  t) ;

/// @brief Method Step, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Step(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, double_t  deltaTime, ::by_ref<double_t>  localTimeline, double_t  localTimescale, ::by_ref<T>  fromSnapshot, ::by_ref<T>  toSnapshot, ::by_ref<double_t>  t) ;

/// @brief Method StepInterpolation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void StepInterpolation(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, double_t  localTimeline, ::by_ref<T>  fromSnapshot, ::by_ref<T>  toSnapshot, ::by_ref<double_t>  t) ;

/// @brief Method StepTime, addr 0x181598010, size 0x10, virtual false, abstract: false, final false
static inline void StepTime(double_t  deltaTime, ::by_ref<double_t>  localTimeline, double_t  localTimescale) ;

/// @brief Method TimelineClamp, addr 0x181598020, size 0x30, virtual false, abstract: false, final false
static inline double_t TimelineClamp(double_t  localTimeline, double_t  bufferTime, double_t  latestRemoteTime) ;

/// @brief Method Timescale, addr 0x181598050, size 0x30, virtual false, abstract: false, final false
static inline double_t Timescale(double_t  drift, double_t  catchupSpeed, double_t  slowdownSpeed, double_t  absoluteCatchupNegativeThreshold, double_t  absoluteCatchupPositiveThreshold) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapshotInterpolation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapshotInterpolation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapshotInterpolation(SnapshotInterpolation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapshotInterpolation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapshotInterpolation(SnapshotInterpolation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18354};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SnapshotInterpolation) == 0x10, "Size mismatch!");

} // namespace end def Mirror
