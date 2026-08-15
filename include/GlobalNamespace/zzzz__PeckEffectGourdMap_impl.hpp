#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectGourdMap.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectGourdMap_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectGourdMap_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
// Ctor Parameters [CppParam { name: "hasEffect", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "::GlobalNamespace::GourdFlag_GourdState", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectGourdMap_EffectSetting::PeckEffectGourdMap_EffectSetting(bool  hasEffect, ::GlobalNamespace::GourdFlag_GourdState  state) noexcept  {
this->hasEffect = hasEffect;
this->state = state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectGourdMap_EffectSetting::PeckEffectGourdMap_EffectSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectGourdMap.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectGourdMap::*)()>(&::GlobalNamespace::PeckEffectGourdMap::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180405cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectGourdMap*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectGourdMap.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectGourdMap::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckEffectGourdMap::OnPeck)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180405d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectGourdMap*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectGourdMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectGourdMap::*)()>(&::GlobalNamespace::PeckEffectGourdMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectGourdMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectGourdMap::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_peckPropReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckPropReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_peckPropReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckPropReference;
}
constexpr void GlobalNamespace::PeckEffectGourdMap::__cordl_internal_set_peckPropReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckPropReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting>& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting> const& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::PeckEffectGourdMap::__cordl_internal_set_settings(::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr bool& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectGourdMap::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectGourdMap::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectGourdMap::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectGourdMap*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectGourdMap::OnPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectGourdMap*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, peckSystem);
}
inline void GlobalNamespace::PeckEffectGourdMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectGourdMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectGourdMap* GlobalNamespace::PeckEffectGourdMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectGourdMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectGourdMap::PeckEffectGourdMap()   {
}
