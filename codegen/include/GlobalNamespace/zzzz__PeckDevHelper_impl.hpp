#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckDevHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckDevHelper_def.hpp"
#include "GlobalNamespace/zzzz__PeckDevHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckDevHelper_UnlockRules.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckDevHelper_UnlockRules::*)(::GlobalNamespace::PeckDevHelper_UnlockRules)>(&::GlobalNamespace::PeckDevHelper_UnlockRules::Matches)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803f2720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckDevHelper_UnlockRules>(),
                        {"Matches", {}, {::i2c::type_of<::GlobalNamespace::PeckDevHelper_UnlockRules>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PeckDevHelper_UnlockRules::Matches(::GlobalNamespace::PeckDevHelper_UnlockRules  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckDevHelper_UnlockRules>(),
                        {"Matches", {}, {::i2c::type_of<::GlobalNamespace::PeckDevHelper_UnlockRules>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "unlocks", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lights", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "chairlift", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "train", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bell", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "tunnel", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "map", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "gourd", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckDevHelper_UnlockRules::PeckDevHelper_UnlockRules(bool  unlocks, bool  lights, bool  chairlift, bool  train, bool  bell, bool  tunnel, bool  map, bool  gourd) noexcept  {
this->unlocks = unlocks;
this->lights = lights;
this->chairlift = chairlift;
this->train = train;
this->bell = bell;
this->tunnel = tunnel;
this->map = map;
this->gourd = gourd;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckDevHelper_UnlockRules::PeckDevHelper_UnlockRules()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckDevHelper.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PeckDevHelper_UnlockRules)>(&::GlobalNamespace::PeckDevHelper::Trigger)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803ee170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckDevHelper*>(),
                        {"Trigger", {}, {::i2c::type_of<::GlobalNamespace::PeckDevHelper_UnlockRules>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckDevHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckDevHelper::*)()>(&::GlobalNamespace::PeckDevHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckDevHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckDevHelper_UnlockRules& GlobalNamespace::PeckDevHelper::__cordl_internal_get_unlockRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockRules;
}
constexpr ::GlobalNamespace::PeckDevHelper_UnlockRules const& GlobalNamespace::PeckDevHelper::__cordl_internal_get_unlockRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockRules;
}
constexpr void GlobalNamespace::PeckDevHelper::__cordl_internal_set_unlockRules(::GlobalNamespace::PeckDevHelper_UnlockRules  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockRules = value;
}
constexpr bool& GlobalNamespace::PeckDevHelper::__cordl_internal_get_fireWithUnlocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireWithUnlocks;
}
constexpr bool const& GlobalNamespace::PeckDevHelper::__cordl_internal_get_fireWithUnlocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireWithUnlocks;
}
constexpr void GlobalNamespace::PeckDevHelper::__cordl_internal_set_fireWithUnlocks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireWithUnlocks = value;
}
constexpr bool& GlobalNamespace::PeckDevHelper::__cordl_internal_get_fireWithLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireWithLights;
}
constexpr bool const& GlobalNamespace::PeckDevHelper::__cordl_internal_get_fireWithLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireWithLights;
}
constexpr void GlobalNamespace::PeckDevHelper::__cordl_internal_set_fireWithLights(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireWithLights = value;
}
constexpr bool& GlobalNamespace::PeckDevHelper::__cordl_internal_get_fireWithTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireWithTrain;
}
constexpr bool const& GlobalNamespace::PeckDevHelper::__cordl_internal_get_fireWithTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireWithTrain;
}
constexpr void GlobalNamespace::PeckDevHelper::__cordl_internal_set_fireWithTrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireWithTrain = value;
}
inline void GlobalNamespace::PeckDevHelper::Trigger(::GlobalNamespace::PeckDevHelper_UnlockRules  rules)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckDevHelper*>(),
                        {"Trigger", {}, {::i2c::type_of<::GlobalNamespace::PeckDevHelper_UnlockRules>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rules);
}
inline void GlobalNamespace::PeckDevHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckDevHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckDevHelper* GlobalNamespace::PeckDevHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckDevHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckDevHelper::PeckDevHelper()   {
}
