#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropToHome.hpp"
#include "GlobalNamespace/zzzz__PeckPropHomeReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPropToHome_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropToHome.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropToHome::*)()>(&::GlobalNamespace::PeckEffectPropToHome::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044c550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropToHome*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropToHome.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropToHome::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPropToHome::Peck)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18044c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropToHome*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropToHome._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropToHome::*)()>(&::GlobalNamespace::PeckEffectPropToHome::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropToHome*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::GlobalNamespace::PeckPropHomeReference& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_propHomeReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeReference;
}
constexpr ::GlobalNamespace::PeckPropHomeReference const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_propHomeReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeReference;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_propHomeReference(::GlobalNamespace::PeckPropHomeReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomeReference = value;
}
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_propReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_propReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propReference = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_onSuccessSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccessSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_onSuccessSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccessSwitch;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_onSuccessSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSuccessSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_onFailureSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailureSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_onFailureSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailureSwitch;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_onFailureSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFailureSwitch = value;
}
constexpr bool& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectPropToHome::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectPropToHome::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectPropToHome::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropToHome*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPropToHome::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropToHome*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPropToHome::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropToHome*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectPropToHome* GlobalNamespace::PeckEffectPropToHome::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPropToHome*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPropToHome::PeckEffectPropToHome()   {
}
