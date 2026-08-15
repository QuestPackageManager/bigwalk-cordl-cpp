#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAnimator.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAnimator_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAnimator_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType::PeckEffectAnimator_ParamType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType::PeckEffectAnimator_ParamType()   {
}
constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType  GlobalNamespace::PeckEffectAnimator_ParamType::StateAsInt{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType  GlobalNamespace::PeckEffectAnimator_ParamType::FloatMultiplied{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimator::*)()>(&::GlobalNamespace::PeckEffectAnimator::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180447b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimator.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimator::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectAnimator::Peck)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180447bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimator.OnFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimator::*)()>(&::GlobalNamespace::PeckEffectAnimator::OnFinish)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804479f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {"OnFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimator::*)()>(&::GlobalNamespace::PeckEffectAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_onFinishEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinishEvent;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_onFinishEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinishEvent;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_onFinishEvent(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFinishEvent = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::StringW& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_parameterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterName;
}
constexpr ::StringW const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_parameterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterName;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_parameterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameterName = value;
}
constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_paramType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paramType;
}
constexpr ::GlobalNamespace::PeckEffectAnimator_ParamType const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_paramType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paramType;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_paramType(::GlobalNamespace::PeckEffectAnimator_ParamType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paramType = value;
}
constexpr float_t& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_floatValueToMultiply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatValueToMultiply;
}
constexpr float_t const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_floatValueToMultiply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatValueToMultiply;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_floatValueToMultiply(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatValueToMultiply = value;
}
constexpr bool& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectAnimator::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectAnimator::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckEffectAnimator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAnimator::Peck(::GlobalNamespace::PeckContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void GlobalNamespace::PeckEffectAnimator::OnFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {"OnFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectAnimator* GlobalNamespace::PeckEffectAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAnimator::PeckEffectAnimator()   {
}
