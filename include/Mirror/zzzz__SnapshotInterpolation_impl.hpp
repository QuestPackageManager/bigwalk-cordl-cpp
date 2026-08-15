#pragma once
// IWYU pragma private; include "Mirror/SnapshotInterpolation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__SnapshotInterpolation_def.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
//  Writing Method size for method: ::Mirror::SnapshotInterpolation.Timescale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t, double_t, double_t)>(&::Mirror::SnapshotInterpolation::Timescale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181598050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"Timescale", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SnapshotInterpolation.DynamicAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Mirror::SnapshotInterpolation::DynamicAdjustment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181597ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"DynamicAdjustment", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SnapshotInterpolation.TimelineClamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Mirror::SnapshotInterpolation::TimelineClamp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181598020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"TimelineClamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SnapshotInterpolation.StepTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, ::by_ref<double_t>, double_t)>(&::Mirror::SnapshotInterpolation::StepTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181598010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"StepTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Mirror::SnapshotInterpolation::Timescale(double_t  drift, double_t  catchupSpeed, double_t  slowdownSpeed, double_t  absoluteCatchupNegativeThreshold, double_t  absoluteCatchupPositiveThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"Timescale", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, drift, catchupSpeed, slowdownSpeed, absoluteCatchupNegativeThreshold, absoluteCatchupPositiveThreshold);
}
inline double_t Mirror::SnapshotInterpolation::DynamicAdjustment(double_t  sendInterval, double_t  jitterStandardDeviation, double_t  dynamicAdjustmentTolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"DynamicAdjustment", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, sendInterval, jitterStandardDeviation, dynamicAdjustmentTolerance);
}
template<typename T>
inline bool Mirror::SnapshotInterpolation::InsertIfNotExists(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, T  snapshot)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                    {"InsertIfNotExists", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, snapshot);
}
inline double_t Mirror::SnapshotInterpolation::TimelineClamp(double_t  localTimeline, double_t  bufferTime, double_t  latestRemoteTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"TimelineClamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, localTimeline, bufferTime, latestRemoteTime);
}
template<typename T>
inline void Mirror::SnapshotInterpolation::InsertAndAdjust(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, T  snapshot, ::by_ref<double_t>  localTimeline, ::by_ref<double_t>  localTimescale, float_t  sendInterval, double_t  bufferTime, double_t  catchupSpeed, double_t  slowdownSpeed, ::by_ref<::Mirror::ExponentialMovingAverage>  driftEma, float_t  catchupNegativeThreshold, float_t  catchupPositiveThreshold, ::by_ref<::Mirror::ExponentialMovingAverage>  deliveryTimeEma)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                    {"InsertAndAdjust", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::Mirror::ExponentialMovingAverage>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Mirror::ExponentialMovingAverage>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, snapshot, localTimeline, localTimescale, sendInterval, bufferTime, catchupSpeed, slowdownSpeed, driftEma, catchupNegativeThreshold, catchupPositiveThreshold, deliveryTimeEma);
}
template<typename T>
inline void Mirror::SnapshotInterpolation::Sample(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, double_t  localTimeline, ::by_ref<int32_t>  from, ::by_ref<int32_t>  to, ::by_ref<double_t>  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                    {"Sample", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,T>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, localTimeline, from, to, t);
}
inline void Mirror::SnapshotInterpolation::StepTime(double_t  deltaTime, ::by_ref<double_t>  localTimeline, double_t  localTimescale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                        {"StepTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deltaTime, localTimeline, localTimescale);
}
template<typename T>
inline void Mirror::SnapshotInterpolation::StepInterpolation(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, double_t  localTimeline, ::by_ref<T>  fromSnapshot, ::by_ref<T>  toSnapshot, ::by_ref<double_t>  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                    {"StepInterpolation", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,T>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, localTimeline, fromSnapshot, toSnapshot, t);
}
template<typename T>
inline void Mirror::SnapshotInterpolation::Step(::System::Collections::Generic::SortedList_2<double_t,T>*  buffer, double_t  deltaTime, ::by_ref<double_t>  localTimeline, double_t  localTimescale, ::by_ref<T>  fromSnapshot, ::by_ref<T>  toSnapshot, ::by_ref<double_t>  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::SnapshotInterpolation*>(),
                    {"Step", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,T>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, deltaTime, localTimeline, localTimescale, fromSnapshot, toSnapshot, t);
}
// Ctor Parameters []
constexpr ::Mirror::SnapshotInterpolation::SnapshotInterpolation()   {
}
