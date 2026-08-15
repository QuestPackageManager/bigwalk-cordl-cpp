#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainJunctionSwitch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrainJunctionSwitch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainJunctionSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainJunctionSwitch::*)()>(&::GlobalNamespace::TrainJunctionSwitch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainJunctionSwitch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TrainJunctionSwitch::__cordl_internal_get_swap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swap;
}
constexpr bool const& GlobalNamespace::TrainJunctionSwitch::__cordl_internal_get_swap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swap;
}
constexpr void GlobalNamespace::TrainJunctionSwitch::__cordl_internal_set_swap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swap = value;
}
inline void GlobalNamespace::TrainJunctionSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainJunctionSwitch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrainJunctionSwitch* GlobalNamespace::TrainJunctionSwitch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrainJunctionSwitch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainJunctionSwitch::TrainJunctionSwitch()   {
}
