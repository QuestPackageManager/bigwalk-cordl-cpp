#pragma once
// IWYU pragma private; include "GlobalNamespace/CompassNeedle.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CompassNeedle_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompassNeedle.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompassNeedle::*)()>(&::GlobalNamespace::CompassNeedle::LateUpdate)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1803f81e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CompassNeedle*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompassNeedle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompassNeedle::*)()>(&::GlobalNamespace::CompassNeedle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CompassNeedle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CompassNeedle::__cordl_internal_get_needleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CompassNeedle::__cordl_internal_get_needleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needleTransform;
}
constexpr void GlobalNamespace::CompassNeedle::__cordl_internal_set_needleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needleTransform = value;
}
constexpr float_t& GlobalNamespace::CompassNeedle::__cordl_internal_get_dampTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTime;
}
constexpr float_t const& GlobalNamespace::CompassNeedle::__cordl_internal_get_dampTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTime;
}
constexpr void GlobalNamespace::CompassNeedle::__cordl_internal_set_dampTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampTime = value;
}
constexpr bool& GlobalNamespace::CompassNeedle::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CompassNeedle::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CompassNeedle::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::CompassNeedle::__cordl_internal_get_angleVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleVelocity;
}
constexpr float_t const& GlobalNamespace::CompassNeedle::__cordl_internal_get_angleVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleVelocity;
}
constexpr void GlobalNamespace::CompassNeedle::__cordl_internal_set_angleVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleVelocity = value;
}
constexpr float_t& GlobalNamespace::CompassNeedle::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GlobalNamespace::CompassNeedle::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GlobalNamespace::CompassNeedle::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
inline void GlobalNamespace::CompassNeedle::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CompassNeedle*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CompassNeedle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CompassNeedle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompassNeedle* GlobalNamespace::CompassNeedle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompassNeedle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompassNeedle::CompassNeedle()   {
}
