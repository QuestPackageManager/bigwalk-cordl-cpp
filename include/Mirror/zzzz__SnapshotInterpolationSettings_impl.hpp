#pragma once
// IWYU pragma private; include "Mirror/SnapshotInterpolationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__SnapshotInterpolationSettings_def.hpp"
//  Writing Method size for method: ::Mirror::SnapshotInterpolationSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SnapshotInterpolationSettings::*)()>(&::Mirror::SnapshotInterpolationSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181597f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolationSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_bufferTimeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferTimeMultiplier;
}
constexpr double_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_bufferTimeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferTimeMultiplier;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_bufferTimeMultiplier(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferTimeMultiplier = value;
}
constexpr float_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_catchupNegativeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupNegativeThreshold;
}
constexpr float_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_catchupNegativeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupNegativeThreshold;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_catchupNegativeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchupNegativeThreshold = value;
}
constexpr float_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_catchupPositiveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupPositiveThreshold;
}
constexpr float_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_catchupPositiveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupPositiveThreshold;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_catchupPositiveThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchupPositiveThreshold = value;
}
constexpr double_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_catchupSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupSpeed;
}
constexpr double_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_catchupSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupSpeed;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_catchupSpeed(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchupSpeed = value;
}
constexpr double_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_slowdownSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownSpeed;
}
constexpr double_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_slowdownSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownSpeed;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_slowdownSpeed(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowdownSpeed = value;
}
constexpr int32_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_driftEmaDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driftEmaDuration;
}
constexpr int32_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_driftEmaDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driftEmaDuration;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_driftEmaDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___driftEmaDuration = value;
}
constexpr bool& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_dynamicAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicAdjustment;
}
constexpr bool const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_dynamicAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicAdjustment;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_dynamicAdjustment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicAdjustment = value;
}
constexpr float_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_dynamicAdjustmentTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicAdjustmentTolerance;
}
constexpr float_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_dynamicAdjustmentTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicAdjustmentTolerance;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_dynamicAdjustmentTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicAdjustmentTolerance = value;
}
constexpr int32_t& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_deliveryTimeEmaDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deliveryTimeEmaDuration;
}
constexpr int32_t const& Mirror::SnapshotInterpolationSettings::__cordl_internal_get_deliveryTimeEmaDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deliveryTimeEmaDuration;
}
constexpr void Mirror::SnapshotInterpolationSettings::__cordl_internal_set_deliveryTimeEmaDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deliveryTimeEmaDuration = value;
}
inline void Mirror::SnapshotInterpolationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SnapshotInterpolationSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SnapshotInterpolationSettings* Mirror::SnapshotInterpolationSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SnapshotInterpolationSettings*>());
}
// Ctor Parameters []
constexpr ::Mirror::SnapshotInterpolationSettings::SnapshotInterpolationSettings()   {
}
