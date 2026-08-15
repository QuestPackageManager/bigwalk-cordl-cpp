#pragma once
// IWYU pragma private; include "GlobalNamespace/PropAnimatables.hpp"
#include "GlobalNamespace/zzzz__BeakHandle_impl.hpp"
#include "GlobalNamespace/zzzz__BeakPostureMask_impl.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropAnimatables_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropAnimatables._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropAnimatables::*)()>(&::GlobalNamespace::PropAnimatables::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAnimatables*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeakHandle& GlobalNamespace::PropAnimatables::__cordl_internal_get_additiveHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additiveHandle;
}
constexpr ::GlobalNamespace::BeakHandle const& GlobalNamespace::PropAnimatables::__cordl_internal_get_additiveHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additiveHandle;
}
constexpr void GlobalNamespace::PropAnimatables::__cordl_internal_set_additiveHandle(::GlobalNamespace::BeakHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additiveHandle = value;
}
constexpr ::GlobalNamespace::BeakHandle& GlobalNamespace::PropAnimatables::__cordl_internal_get_overrideHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideHandle;
}
constexpr ::GlobalNamespace::BeakHandle const& GlobalNamespace::PropAnimatables::__cordl_internal_get_overrideHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideHandle;
}
constexpr void GlobalNamespace::PropAnimatables::__cordl_internal_set_overrideHandle(::GlobalNamespace::BeakHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideHandle = value;
}
constexpr ::GlobalNamespace::BeakPostureMask& GlobalNamespace::PropAnimatables::__cordl_internal_get_overridesMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridesMask;
}
constexpr ::GlobalNamespace::BeakPostureMask const& GlobalNamespace::PropAnimatables::__cordl_internal_get_overridesMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridesMask;
}
constexpr void GlobalNamespace::PropAnimatables::__cordl_internal_set_overridesMask(::GlobalNamespace::BeakPostureMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overridesMask = value;
}
constexpr ::GlobalNamespace::BeakPosture& GlobalNamespace::PropAnimatables::__cordl_internal_get_beakPostureAdditive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureAdditive;
}
constexpr ::GlobalNamespace::BeakPosture const& GlobalNamespace::PropAnimatables::__cordl_internal_get_beakPostureAdditive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakPostureAdditive;
}
constexpr void GlobalNamespace::PropAnimatables::__cordl_internal_set_beakPostureAdditive(::GlobalNamespace::BeakPosture  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beakPostureAdditive = value;
}
inline void GlobalNamespace::PropAnimatables::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAnimatables*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropAnimatables* GlobalNamespace::PropAnimatables::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropAnimatables*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropAnimatables::PropAnimatables()   {
}
