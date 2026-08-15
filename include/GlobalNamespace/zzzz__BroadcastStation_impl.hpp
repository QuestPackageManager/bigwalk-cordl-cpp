#pragma once
// IWYU pragma private; include "GlobalNamespace/BroadcastStation.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BroadcastStation_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BroadcastStation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BroadcastStation::*)()>(&::GlobalNamespace::BroadcastStation::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803f7c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BroadcastStation.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BroadcastStation::*)(bool)>(&::GlobalNamespace::BroadcastStation::OnSpawn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803f7df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {"OnSpawn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BroadcastStation.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BroadcastStation::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::BroadcastStation::Unlock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f7ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {"Unlock", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BroadcastStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BroadcastStation::*)()>(&::GlobalNamespace::BroadcastStation::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f7f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MusicGroup>& GlobalNamespace::BroadcastStation::__cordl_internal_get_musicGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& GlobalNamespace::BroadcastStation::__cordl_internal_get_musicGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicGroup = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::BroadcastStation::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::BroadcastStation::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BroadcastStation::__cordl_internal_get_tunerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BroadcastStation::__cordl_internal_get_tunerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunerTransform;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_tunerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tunerTransform = value;
}
constexpr float_t& GlobalNamespace::BroadcastStation::__cordl_internal_get_tunerGap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunerGap;
}
constexpr float_t const& GlobalNamespace::BroadcastStation::__cordl_internal_get_tunerGap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunerGap;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_tunerGap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tunerGap = value;
}
constexpr float_t& GlobalNamespace::BroadcastStation::__cordl_internal_get_emission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emission;
}
constexpr float_t const& GlobalNamespace::BroadcastStation::__cordl_internal_get_emission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emission;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_emission(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emission = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::BroadcastStation::__cordl_internal_get_radioProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::BroadcastStation::__cordl_internal_get_radioProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioProp;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_radioProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radioProp = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::BroadcastStation::__cordl_internal_get_radioPeckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioPeckSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::BroadcastStation::__cordl_internal_get_radioPeckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioPeckSystem;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_radioPeckSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radioPeckSystem = value;
}
constexpr bool& GlobalNamespace::BroadcastStation::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::BroadcastStation::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::BroadcastStation::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::BroadcastStation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BroadcastStation::OnSpawn(bool  isInventory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {"OnSpawn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isInventory);
}
inline void GlobalNamespace::BroadcastStation::Unlock(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {"Unlock", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::BroadcastStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BroadcastStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BroadcastStation* GlobalNamespace::BroadcastStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BroadcastStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BroadcastStation::BroadcastStation()   {
}
