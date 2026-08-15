#pragma once
// IWYU pragma private; include "GlobalNamespace/FlareDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlareDriver_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlareDriver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlareDriver::*)()>(&::GlobalNamespace::FlareDriver::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803fc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlareDriver.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlareDriver::*)(bool)>(&::GlobalNamespace::FlareDriver::SetState)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803fc1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlareDriver.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlareDriver::*)()>(&::GlobalNamespace::FlareDriver::OccasionalUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803fc120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlareDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlareDriver::*)()>(&::GlobalNamespace::FlareDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::FlareDriver::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::FlareDriver::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::FlareDriver::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& GlobalNamespace::FlareDriver::__cordl_internal_get_propertyBlockHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& GlobalNamespace::FlareDriver::__cordl_internal_get_propertyBlockHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr void GlobalNamespace::FlareDriver::__cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelper = value;
}
constexpr float_t& GlobalNamespace::FlareDriver::__cordl_internal_get_transitionDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionDuration;
}
constexpr float_t const& GlobalNamespace::FlareDriver::__cordl_internal_get_transitionDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionDuration;
}
constexpr void GlobalNamespace::FlareDriver::__cordl_internal_set_transitionDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionDuration = value;
}
constexpr bool& GlobalNamespace::FlareDriver::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::FlareDriver::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::FlareDriver::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr float_t& GlobalNamespace::FlareDriver::__cordl_internal_get_changeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeTime;
}
constexpr float_t const& GlobalNamespace::FlareDriver::__cordl_internal_get_changeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeTime;
}
constexpr void GlobalNamespace::FlareDriver::__cordl_internal_set_changeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeTime = value;
}
inline void GlobalNamespace::FlareDriver::setStaticF_LightFadeProperty(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LightFadeProperty", ::GlobalNamespace::FlareDriver*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FlareDriver::getStaticF_LightFadeProperty()  {
return ::cordl_internals::getStaticField<int32_t, "LightFadeProperty", ::GlobalNamespace::FlareDriver*>();
}
inline void GlobalNamespace::FlareDriver::setStaticF_LightOnProperty(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LightOnProperty", ::GlobalNamespace::FlareDriver*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FlareDriver::getStaticF_LightOnProperty()  {
return ::cordl_internals::getStaticField<int32_t, "LightOnProperty", ::GlobalNamespace::FlareDriver*>();
}
inline void GlobalNamespace::FlareDriver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlareDriver::SetState(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::FlareDriver::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlareDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlareDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlareDriver* GlobalNamespace::FlareDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlareDriver*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::FlareDriver::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::FlareDriver::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlareDriver::FlareDriver()   {
}
