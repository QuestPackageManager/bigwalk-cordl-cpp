#pragma once
// IWYU pragma private; include "GlobalNamespace/FmRadioDial.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FmRadioDial_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FmRadioDial.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioDial::*)(int32_t)>(&::GlobalNamespace::FmRadioDial::SetState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fc390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioDial*>(),
                        {"SetState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioDial.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioDial::*)()>(&::GlobalNamespace::FmRadioDial::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803fc3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioDial*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioDial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioDial::*)()>(&::GlobalNamespace::FmRadioDial::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fc490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioDial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FmRadioDial::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FmRadioDial::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GlobalNamespace::FmRadioDial::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
constexpr float_t& GlobalNamespace::FmRadioDial::__cordl_internal_get_gap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gap;
}
constexpr float_t const& GlobalNamespace::FmRadioDial::__cordl_internal_get_gap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gap;
}
constexpr void GlobalNamespace::FmRadioDial::__cordl_internal_set_gap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gap = value;
}
constexpr float_t& GlobalNamespace::FmRadioDial::__cordl_internal_get_smoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr float_t const& GlobalNamespace::FmRadioDial::__cordl_internal_get_smoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr void GlobalNamespace::FmRadioDial::__cordl_internal_set_smoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothTime = value;
}
constexpr int32_t& GlobalNamespace::FmRadioDial::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr int32_t const& GlobalNamespace::FmRadioDial::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void GlobalNamespace::FmRadioDial::__cordl_internal_set__currentState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
constexpr float_t& GlobalNamespace::FmRadioDial::__cordl_internal_get__smoothPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothPosition;
}
constexpr float_t const& GlobalNamespace::FmRadioDial::__cordl_internal_get__smoothPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothPosition;
}
constexpr void GlobalNamespace::FmRadioDial::__cordl_internal_set__smoothPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothPosition = value;
}
constexpr float_t& GlobalNamespace::FmRadioDial::__cordl_internal_get__smoothVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothVelocity;
}
constexpr float_t const& GlobalNamespace::FmRadioDial::__cordl_internal_get__smoothVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothVelocity;
}
constexpr void GlobalNamespace::FmRadioDial::__cordl_internal_set__smoothVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothVelocity = value;
}
inline void GlobalNamespace::FmRadioDial::SetState(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioDial*>(),
                        {"SetState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::FmRadioDial::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioDial*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioDial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioDial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FmRadioDial* GlobalNamespace::FmRadioDial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FmRadioDial*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FmRadioDial::FmRadioDial()   {
}
