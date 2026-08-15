#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectLaunchProp.hpp"
#include "GlobalNamespace/zzzz__Launcher_impl.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectLaunchProp_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectLaunchProp.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectLaunchProp::*)()>(&::GlobalNamespace::PeckEffectLaunchProp::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180449af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectLaunchProp*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectLaunchProp.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectLaunchProp::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectLaunchProp::Peck)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180449b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectLaunchProp*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectLaunchProp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectLaunchProp::*)()>(&::GlobalNamespace::PeckEffectLaunchProp::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectLaunchProp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_propReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_propReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr void GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propReference = value;
}
constexpr ::GlobalNamespace::Launcher& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_launcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launcher;
}
constexpr ::GlobalNamespace::Launcher const& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_launcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launcher;
}
constexpr void GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_set_launcher(::GlobalNamespace::Launcher  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launcher = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr bool& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectLaunchProp::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectLaunchProp::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectLaunchProp*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectLaunchProp::Peck(::GlobalNamespace::PeckContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectLaunchProp*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::PeckEffectLaunchProp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectLaunchProp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectLaunchProp* GlobalNamespace::PeckEffectLaunchProp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectLaunchProp*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectLaunchProp::PeckEffectLaunchProp()   {
}
