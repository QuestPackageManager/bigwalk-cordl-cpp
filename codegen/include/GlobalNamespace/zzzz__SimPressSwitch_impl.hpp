#pragma once
// IWYU pragma private; include "GlobalNamespace/SimPressSwitch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimPressSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimPressSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimPressSwitch::*)()>(&::GlobalNamespace::SimPressSwitch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimPressSwitch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::SimPressSwitch::__cordl_internal_get_pressSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::SimPressSwitch::__cordl_internal_get_pressSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressSystem;
}
constexpr void GlobalNamespace::SimPressSwitch::__cordl_internal_set_pressSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::SimPressSwitch::__cordl_internal_get_stateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::SimPressSwitch::__cordl_internal_get_stateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateSystem;
}
constexpr void GlobalNamespace::SimPressSwitch::__cordl_internal_set_stateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateSystem = value;
}
inline void GlobalNamespace::SimPressSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimPressSwitch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimPressSwitch* GlobalNamespace::SimPressSwitch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimPressSwitch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimPressSwitch::SimPressSwitch()   {
}
