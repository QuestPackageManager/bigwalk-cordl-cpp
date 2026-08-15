#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyDependantPeckSwitch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KeyDependantPeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__UnlockTrailStation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeyDependantPeckSwitch.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyDependantPeckSwitch::*)()>(&::GlobalNamespace::KeyDependantPeckSwitch::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18040a640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyDependantPeckSwitch*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyDependantPeckSwitch.OnPin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyDependantPeckSwitch::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::KeyDependantPeckSwitch::OnPin)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18040a720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyDependantPeckSwitch*>(),
                        {"OnPin", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyDependantPeckSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyDependantPeckSwitch::*)()>(&::GlobalNamespace::KeyDependantPeckSwitch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyDependantPeckSwitch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::UnlockTrailStation>& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_station()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___station;
}
constexpr ::UnityW<::GlobalNamespace::UnlockTrailStation> const& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_station() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___station;
}
constexpr void GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_set_station(::UnityW<::GlobalNamespace::UnlockTrailStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___station = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_propHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_propHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr void GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHome = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_onPlaceBlank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaceBlank;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_onPlaceBlank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaceBlank;
}
constexpr void GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_set_onPlaceBlank(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPlaceBlank = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_onPlaceCut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaceCut;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_get_onPlaceCut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaceCut;
}
constexpr void GlobalNamespace::KeyDependantPeckSwitch::__cordl_internal_set_onPlaceCut(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPlaceCut = value;
}
inline void GlobalNamespace::KeyDependantPeckSwitch::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyDependantPeckSwitch*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KeyDependantPeckSwitch::OnPin(::GlobalNamespace::Prop*  keyProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyDependantPeckSwitch*>(),
                        {"OnPin", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyProp);
}
inline void GlobalNamespace::KeyDependantPeckSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyDependantPeckSwitch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KeyDependantPeckSwitch* GlobalNamespace::KeyDependantPeckSwitch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KeyDependantPeckSwitch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyDependantPeckSwitch::KeyDependantPeckSwitch()   {
}
