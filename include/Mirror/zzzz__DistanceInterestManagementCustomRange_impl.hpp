#pragma once
// IWYU pragma private; include "Mirror/DistanceInterestManagementCustomRange.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/zzzz__DistanceInterestManagementCustomRange_def.hpp"
//  Writing Method size for method: ::Mirror::DistanceInterestManagementCustomRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagementCustomRange::*)()>(&::Mirror::DistanceInterestManagementCustomRange::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181517e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagementCustomRange*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagementCustomRange.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagementCustomRange::*)()>(&::Mirror::DistanceInterestManagementCustomRange::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagementCustomRange*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::DistanceInterestManagementCustomRange::__cordl_internal_get_visRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visRange;
}
constexpr int32_t const& Mirror::DistanceInterestManagementCustomRange::__cordl_internal_get_visRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visRange;
}
constexpr void Mirror::DistanceInterestManagementCustomRange::__cordl_internal_set_visRange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visRange = value;
}
inline void Mirror::DistanceInterestManagementCustomRange::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagementCustomRange*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::DistanceInterestManagementCustomRange::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagementCustomRange*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::DistanceInterestManagementCustomRange* Mirror::DistanceInterestManagementCustomRange::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::DistanceInterestManagementCustomRange*>());
}
// Ctor Parameters []
constexpr ::Mirror::DistanceInterestManagementCustomRange::DistanceInterestManagementCustomRange()   {
}
