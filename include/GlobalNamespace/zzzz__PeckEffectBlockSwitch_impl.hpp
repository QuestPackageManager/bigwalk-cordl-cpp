#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectBlockSwitch.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectBlockSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectBlockSwitch.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectBlockSwitch::*)()>(&::GlobalNamespace::PeckEffectBlockSwitch::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804486c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBlockSwitch*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectBlockSwitch.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectBlockSwitch::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectBlockSwitch::Peck)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180448760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBlockSwitch*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectBlockSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectBlockSwitch::*)()>(&::GlobalNamespace::PeckEffectBlockSwitch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBlockSwitch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_set_target(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_blockedPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedPerState;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_blockedPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedPerState;
}
constexpr void GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_set_blockedPerState(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedPerState = value;
}
constexpr bool& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_isBlocking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBlocking;
}
constexpr bool const& GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_get_isBlocking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBlocking;
}
constexpr void GlobalNamespace::PeckEffectBlockSwitch::__cordl_internal_set_isBlocking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBlocking = value;
}
inline void GlobalNamespace::PeckEffectBlockSwitch::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBlockSwitch*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectBlockSwitch::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBlockSwitch*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectBlockSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectBlockSwitch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectBlockSwitch* GlobalNamespace::PeckEffectBlockSwitch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectBlockSwitch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectBlockSwitch::PeckEffectBlockSwitch()   {
}
