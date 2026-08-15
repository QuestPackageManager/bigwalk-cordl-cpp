#pragma once
// IWYU pragma private; include "GlobalNamespace/Animness.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Animness_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Animness.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Animness::*)()>(&::GlobalNamespace::Animness::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803e3270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Animness*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Animness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Animness::*)()>(&::GlobalNamespace::Animness::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Animness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::Animness::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::Animness::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::StringW& GlobalNamespace::Animness::__cordl_internal_get_parameterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterName;
}
constexpr ::StringW const& GlobalNamespace::Animness::__cordl_internal_get_parameterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterName;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_parameterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameterName = value;
}
constexpr float_t& GlobalNamespace::Animness::__cordl_internal_get_smoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr float_t const& GlobalNamespace::Animness::__cordl_internal_get_smoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_smoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothTime = value;
}
constexpr float_t& GlobalNamespace::Animness::__cordl_internal_get_trueValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trueValue;
}
constexpr float_t const& GlobalNamespace::Animness::__cordl_internal_get_trueValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trueValue;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_trueValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trueValue = value;
}
constexpr float_t& GlobalNamespace::Animness::__cordl_internal_get_dampedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedValue;
}
constexpr float_t const& GlobalNamespace::Animness::__cordl_internal_get_dampedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedValue;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_dampedValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampedValue = value;
}
constexpr float_t& GlobalNamespace::Animness::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr float_t const& GlobalNamespace::Animness::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr bool& GlobalNamespace::Animness::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::Animness::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::Animness::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::Animness::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Animness*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Animness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Animness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Animness* GlobalNamespace::Animness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Animness*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Animness::Animness()   {
}
