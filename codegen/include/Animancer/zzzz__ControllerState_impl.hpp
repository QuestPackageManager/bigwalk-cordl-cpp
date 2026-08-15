#pragma once
// IWYU pragma private; include "Animancer/ControllerState.hpp"
#include "Animancer/zzzz__AnimancerState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_impl.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_impl.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorTransitionInfo_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_ParameterID::*)(::StringW)>(&::Animancer::ControllerState_ParameterID::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f1800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_ParameterID::*)(int32_t)>(&::Animancer::ControllerState_ParameterID::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f1840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_ParameterID::*)(::StringW, int32_t)>(&::Animancer::ControllerState_ParameterID::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f17c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID.op_Implicit___Animancer__ControllerState_ParameterID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (*)(::StringW)>(&::Animancer::ControllerState_ParameterID::op_Implicit___Animancer__ControllerState_ParameterID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID.op_Implicit___Animancer__ControllerState_ParameterID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (*)(int32_t)>(&::Animancer::ControllerState_ParameterID::op_Implicit___Animancer__ControllerState_ParameterID)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1802f18d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::ControllerState_ParameterID::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID.ValidateHasParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_ParameterID::*)(::UnityEngine::RuntimeAnimatorController*, ::UnityEngine::AnimatorControllerParameterType)>(&::Animancer::ControllerState_ParameterID::ValidateHasParameter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"ValidateHasParameter", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameterType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_ParameterID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::ControllerState_ParameterID::*)()>(&::Animancer::ControllerState_ParameterID::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f1750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                    {::i2c::class_of<::Animancer::ControllerState_ParameterID>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Animancer::ControllerState_ParameterID::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void Animancer::ControllerState_ParameterID::_ctor(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline void Animancer::ControllerState_ParameterID::_ctor(::StringW  name, int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, hash);
}
inline ::Animancer::ControllerState_ParameterID Animancer::ControllerState_ParameterID::op_Implicit___Animancer__ControllerState_ParameterID(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(nullptr, ___internal_method, name);
}
inline ::Animancer::ControllerState_ParameterID Animancer::ControllerState_ParameterID::op_Implicit___Animancer__ControllerState_ParameterID(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(nullptr, ___internal_method, hash);
}
inline int32_t Animancer::ControllerState_ParameterID::op_Implicit_int32_t(::Animancer::ControllerState_ParameterID  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parameter);
}
inline void Animancer::ControllerState_ParameterID::ValidateHasParameter(::UnityEngine::RuntimeAnimatorController*  controller, ::UnityEngine::AnimatorControllerParameterType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_ParameterID>(),
                        {"ValidateHasParameter", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::UnityEngine::AnimatorControllerParameterType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, controller, type);
}
inline ::StringW Animancer::ControllerState_ParameterID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState_ParameterID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hash", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::ControllerState_ParameterID::ControllerState_ParameterID(::StringW  Name, int32_t  Hash) noexcept  {
this->Name = Name;
this->Hash = Hash;
}
// Ctor Parameters []
constexpr ::Animancer::ControllerState_ParameterID::ControllerState_ParameterID()   {
}
//  Writing Method size for method: ::Animancer::ControllerState_DampedFloatParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_DampedFloatParameter::*)(::Animancer::ControllerState_ParameterID, float_t, float_t, float_t)>(&::Animancer::ControllerState_DampedFloatParameter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_DampedFloatParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_DampedFloatParameter.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_DampedFloatParameter::*)(::Animancer::ControllerState*)>(&::Animancer::ControllerState_DampedFloatParameter::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ec9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_DampedFloatParameter*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::ControllerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState_DampedFloatParameter.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState_DampedFloatParameter::*)(::Animancer::ControllerState*, float_t)>(&::Animancer::ControllerState_DampedFloatParameter::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ec960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_DampedFloatParameter*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::ControllerState*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ControllerState_ParameterID& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_parameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_parameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter;
}
constexpr void Animancer::ControllerState_DampedFloatParameter::__cordl_internal_set_parameter(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameter = value;
}
constexpr float_t& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_smoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr float_t const& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_smoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothTime;
}
constexpr void Animancer::ControllerState_DampedFloatParameter::__cordl_internal_set_smoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothTime = value;
}
constexpr float_t& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_currentValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
constexpr float_t const& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_currentValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
constexpr void Animancer::ControllerState_DampedFloatParameter::__cordl_internal_set_currentValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentValue = value;
}
constexpr float_t& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_targetValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetValue;
}
constexpr float_t const& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_targetValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetValue;
}
constexpr void Animancer::ControllerState_DampedFloatParameter::__cordl_internal_set_targetValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetValue = value;
}
constexpr float_t& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void Animancer::ControllerState_DampedFloatParameter::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr float_t const& Animancer::ControllerState_DampedFloatParameter::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Animancer::ControllerState_DampedFloatParameter::__cordl_internal_set_velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
inline void Animancer::ControllerState_DampedFloatParameter::_ctor(::Animancer::ControllerState_ParameterID  parameter, float_t  smoothTime, float_t  defaultValue, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_DampedFloatParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter, smoothTime, defaultValue, maxSpeed);
}
inline void Animancer::ControllerState_DampedFloatParameter::Apply(::Animancer::ControllerState*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_DampedFloatParameter*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::ControllerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Animancer::ControllerState_DampedFloatParameter::Apply(::Animancer::ControllerState*  controller, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState_DampedFloatParameter*>(),
                        {"Apply", {}, {::i2c::type_of<::Animancer::ControllerState*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, deltaTime);
}
inline ::Animancer::ControllerState_DampedFloatParameter* Animancer::ControllerState_DampedFloatParameter::New_ctor(::Animancer::ControllerState_ParameterID  parameter, float_t  smoothTime, float_t  defaultValue, float_t  maxSpeed)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ControllerState_DampedFloatParameter*>(parameter, smoothTime, defaultValue, maxSpeed));
}
// Ctor Parameters []
constexpr ::Animancer::ControllerState_DampedFloatParameter::ControllerState_DampedFloatParameter()   {
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr  Animancer::ControllerState_ITransition::operator ::Animancer::ITransition_1<::Animancer::ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ControllerState*>* Animancer::ControllerState_ITransition::i___Animancer__ITransition_1___Animancer__ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ControllerState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ControllerState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ControllerState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ControllerState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ControllerState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ControllerState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::ControllerState_ActionOnStop::ControllerState_ActionOnStop(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::ControllerState_ActionOnStop::ControllerState_ActionOnStop()   {
}
constexpr ::Animancer::ControllerState_ActionOnStop  Animancer::ControllerState_ActionOnStop::DefaultState{static_cast<int32_t>(0x0)};
constexpr ::Animancer::ControllerState_ActionOnStop  Animancer::ControllerState_ActionOnStop::RewindTime{static_cast<int32_t>(0x1)};
constexpr ::Animancer::ControllerState_ActionOnStop  Animancer::ControllerState_ActionOnStop::Continue{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Animancer::ControllerState.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RuntimeAnimatorController> (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_Controller)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::UnityEngine::RuntimeAnimatorController*)>(&::Animancer::ControllerState::set_Controller)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ec7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"set_Controller", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::UnityEngine::Object*)>(&::Animancer::ControllerState::set_MainObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ec830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimatorControllerPlayable (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_Playable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_Playable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_ActionsOnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Animancer::ControllerState_ActionOnStop> (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_ActionsOnStop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_ActionsOnStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_ActionsOnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::ArrayW<::Animancer::ControllerState_ActionOnStop>)>(&::Animancer::ControllerState::set_ActionsOnStop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ec7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"set_ActionsOnStop", {}, {::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_DefaultStateHashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_DefaultStateHashes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_DefaultStateHashes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_DefaultStateHashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::ArrayW<int32_t>)>(&::Animancer::ControllerState::set_DefaultStateHashes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ec810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"set_DefaultStateHashes", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.AssertParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(float_t, ::StringW)>(&::Animancer::ControllerState::AssertParameterValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802eae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"AssertParameterValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.CopyIKFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::Animancer::AnimancerNode*)>(&::Animancer::ControllerState::CopyIKFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(bool)>(&::Animancer::ControllerState::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(bool)>(&::Animancer::ControllerState::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetParameterHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetParameterHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::UnityEngine::RuntimeAnimatorController*)>(&::Animancer::ControllerState::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ec400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::ArrayW<::Animancer::ControllerState_ActionOnStop>)>(&::Animancer::ControllerState::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802ec470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::ControllerState::CreatePlayable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802eaef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.RecreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::RecreatePlayable)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1802eba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetStateInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802eb810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_RawTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_RawTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802ec5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.set_RawTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(double_t)>(&::Animancer::ControllerState::set_RawTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802ec890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_Length)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802ec560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_IsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_IsLooping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802ec4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GatherDefaultStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::GatherDefaultStates)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802eb2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GatherDefaultStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::Stop)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1802ec1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.ApplyActionsOnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::ApplyActionsOnStop)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802eacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"ApplyActionsOnStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::ControllerState::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eb250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::Destroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802eb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ControllerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::ControllerState::Clone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802eae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerState*>(),
                    {::i2c::class_of<::Animancer::ControllerState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.Animancer_ICopyable_Animancer_ControllerState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::Animancer::ControllerState*)>(&::Animancer::ControllerState::Animancer_ICopyable_Animancer_ControllerState__CopyFrom)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1802ea9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"Animancer.ICopyable<Animancer.ControllerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::ControllerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetFadeDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::ControllerState::GetFadeDuration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802eb520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetFadeDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.CrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, float_t, int32_t, float_t)>(&::Animancer::ControllerState::CrossFade)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802eb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.CrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, float_t, int32_t, float_t)>(&::Animancer::ControllerState::CrossFade)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802eb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.CrossFadeInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, float_t, int32_t, float_t)>(&::Animancer::ControllerState::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802eaff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.CrossFadeInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, float_t, int32_t, float_t)>(&::Animancer::ControllerState::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802eaf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, int32_t, float_t)>(&::Animancer::ControllerState::Play)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"Play", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, int32_t, float_t)>(&::Animancer::ControllerState::Play)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"Play", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.PlayInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, int32_t, float_t)>(&::Animancer::ControllerState::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.PlayInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, int32_t, float_t)>(&::Animancer::ControllerState::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetBool)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::GetBool)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, bool)>(&::Animancer::ControllerState::SetBool)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ebd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetBool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, bool)>(&::Animancer::ControllerState::SetBool)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ebd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::GetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetFloat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, float_t)>(&::Animancer::ControllerState::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ec0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, float_t)>(&::Animancer::ControllerState::SetFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ebdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetInteger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::GetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetInteger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, int32_t)>(&::Animancer::ControllerState::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ec110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW, int32_t)>(&::Animancer::ControllerState::SetInteger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ec0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::SetTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ec1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::SetTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ec170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::ResetTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ebd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::ResetTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ebd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.IsParameterControlledByCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.IsParameterControlledByCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetParameter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetParameter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::GetParameterCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetParameterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_parameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_parameterCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_parameterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorControllerParameter*> (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_parameters)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802ec6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ControllerState::*)(::StringW, float_t, float_t, float_t, float_t)>(&::Animancer::ControllerState::SetFloat)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802ebf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ControllerState::*)(int32_t, float_t, float_t, float_t, float_t)>(&::Animancer::ControllerState::SetFloat)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802ebdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetLayerWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetLayerWeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.SetLayerWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, float_t)>(&::Animancer::ControllerState::SetLayerWeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ec140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetLayerWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetLayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::GetLayerCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.get_layerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)()>(&::Animancer::ControllerState::get_layerCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_layerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetLayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)(::StringW)>(&::Animancer::ControllerState::GetLayerIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetLayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetLayerName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetCurrentAnimatorStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetCurrentAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetNextAnimatorStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetNextAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.HasState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)(int32_t, int32_t)>(&::Animancer::ControllerState::HasState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"HasState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.IsInTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::IsInTransition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"IsInTransition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetAnimatorTransitionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorTransitionInfo (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetAnimatorTransitionInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetAnimatorTransitionInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetCurrentAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetCurrentAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::Animancer::ControllerState::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetCurrentAnimatorClipInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetCurrentAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetNextAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetNextAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerState::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::Animancer::ControllerState::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerState.GetNextAnimatorClipInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ControllerState::*)(int32_t)>(&::Animancer::ControllerState::GetNextAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802eb6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Animancer::ControllerState::__cordl_internal_get__Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Animancer::ControllerState::__cordl_internal_get__Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller;
}
constexpr void Animancer::ControllerState::__cordl_internal_set__Controller(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller = value;
}
constexpr ::UnityEngine::Animations::AnimatorControllerPlayable& Animancer::ControllerState::__cordl_internal_get__Playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr ::UnityEngine::Animations::AnimatorControllerPlayable const& Animancer::ControllerState::__cordl_internal_get__Playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr void Animancer::ControllerState::__cordl_internal_set__Playable(::UnityEngine::Animations::AnimatorControllerPlayable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playable = value;
}
constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop>& Animancer::ControllerState::__cordl_internal_get__ActionsOnStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionsOnStop;
}
constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop> const& Animancer::ControllerState::__cordl_internal_get__ActionsOnStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionsOnStop;
}
constexpr void Animancer::ControllerState::__cordl_internal_set__ActionsOnStop(::ArrayW<::Animancer::ControllerState_ActionOnStop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionsOnStop = value;
}
constexpr ::ArrayW<int32_t>& Animancer::ControllerState::__cordl_internal_get__DefaultStateHashes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultStateHashes_k__BackingField;
}
constexpr ::ArrayW<int32_t> const& Animancer::ControllerState::__cordl_internal_get__DefaultStateHashes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultStateHashes_k__BackingField;
}
constexpr void Animancer::ControllerState::__cordl_internal_set__DefaultStateHashes_k__BackingField(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultStateHashes_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*>& Animancer::ControllerState::__cordl_internal_get__Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters;
}
constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*> const& Animancer::ControllerState::__cordl_internal_get__Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters;
}
constexpr void Animancer::ControllerState::__cordl_internal_set__Parameters(::ArrayW<::UnityEngine::AnimatorControllerParameter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& Animancer::ControllerState::__cordl_internal_get__SmoothingVelocities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmoothingVelocities;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& Animancer::ControllerState::__cordl_internal_get__SmoothingVelocities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmoothingVelocities;
}
constexpr void Animancer::ControllerState::__cordl_internal_set__SmoothingVelocities(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SmoothingVelocities = value;
}
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> Animancer::ControllerState::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RuntimeAnimatorController>>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_Controller(::UnityEngine::RuntimeAnimatorController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"set_Controller", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> Animancer::ControllerState::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_MainObject(::UnityEngine::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Animations::AnimatorControllerPlayable Animancer::ControllerState::get_Playable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_Playable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimatorControllerPlayable>(this, ___internal_method);
}
inline ::ArrayW<::Animancer::ControllerState_ActionOnStop> Animancer::ControllerState::get_ActionsOnStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_ActionsOnStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Animancer::ControllerState_ActionOnStop>>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_ActionsOnStop(::ArrayW<::Animancer::ControllerState_ActionOnStop>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"set_ActionsOnStop", {}, {::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> Animancer::ControllerState::get_DefaultStateHashes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_DefaultStateHashes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_DefaultStateHashes(::ArrayW<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"set_DefaultStateHashes", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::ControllerState::AssertParameterValue(float_t  value, ::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"AssertParameterValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, parameterName);
}
inline void Animancer::ControllerState::CopyIKFlags(::Animancer::AnimancerNode*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline bool Animancer::ControllerState::get_ApplyAnimatorIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_ApplyAnimatorIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::ControllerState::get_ApplyFootIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_ApplyFootIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Animancer::ControllerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::ControllerState::GetParameterHash(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void Animancer::ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Animancer::ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, actionsOnStop);
}
inline void Animancer::ControllerState::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Animancer::ControllerState::RecreatePlayable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorStateInfo Animancer::ControllerState::GetStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline double_t Animancer::ControllerState::get_RawTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Animancer::ControllerState::set_RawTime(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::ControllerState::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::ControllerState::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ControllerState::GatherDefaultStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GatherDefaultStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ControllerState::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ControllerState::ApplyActionsOnStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"ApplyActionsOnStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ControllerState::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ControllerState::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::ControllerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::ControllerState::Animancer_ICopyable_Animancer_ControllerState__CopyFrom(::Animancer::ControllerState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"Animancer.ICopyable<Animancer.ControllerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::ControllerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline float_t Animancer::ControllerState::GetFadeDuration(float_t  fadeDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetFadeDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fadeDuration);
}
inline void Animancer::ControllerState::CrossFade(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, fadeDuration, layer, normalizedTime);
}
inline void Animancer::ControllerState::CrossFade(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, fadeDuration, layer, normalizedTime);
}
inline void Animancer::ControllerState::CrossFadeInFixedTime(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, fadeDuration, layer, fixedTime);
}
inline void Animancer::ControllerState::CrossFadeInFixedTime(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, fadeDuration, layer, fixedTime);
}
inline void Animancer::ControllerState::Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"Play", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer, normalizedTime);
}
inline void Animancer::ControllerState::Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"Play", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, layer, normalizedTime);
}
inline void Animancer::ControllerState::PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer, fixedTime);
}
inline void Animancer::ControllerState::PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateName, layer, fixedTime);
}
inline bool Animancer::ControllerState::GetBool(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline bool Animancer::ControllerState::GetBool(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void Animancer::ControllerState::SetBool(int32_t  id, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetBool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void Animancer::ControllerState::SetBool(::StringW  name, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline float_t Animancer::ControllerState::GetFloat(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline float_t Animancer::ControllerState::GetFloat(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetFloat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name);
}
inline void Animancer::ControllerState::SetFloat(int32_t  id, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void Animancer::ControllerState::SetFloat(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline int32_t Animancer::ControllerState::GetInteger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetInteger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline int32_t Animancer::ControllerState::GetInteger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetInteger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline void Animancer::ControllerState::SetInteger(int32_t  id, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void Animancer::ControllerState::SetInteger(::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void Animancer::ControllerState::SetTrigger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Animancer::ControllerState::SetTrigger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Animancer::ControllerState::ResetTrigger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Animancer::ControllerState::ResetTrigger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline bool Animancer::ControllerState::IsParameterControlledByCurve(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline bool Animancer::ControllerState::IsParameterControlledByCurve(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::UnityEngine::AnimatorControllerParameter* Animancer::ControllerState::GetParameter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetParameter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(this, ___internal_method, index);
}
inline int32_t Animancer::ControllerState::GetParameterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetParameterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::ControllerState::get_parameterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_parameterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> Animancer::ControllerState::get_parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorControllerParameter*>>(this, ___internal_method);
}
inline float_t Animancer::ControllerState::SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name, value, dampTime, deltaTime, maxSpeed);
}
inline float_t Animancer::ControllerState::SetFloat(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id, value, dampTime, deltaTime, maxSpeed);
}
inline float_t Animancer::ControllerState::GetLayerWeight(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, layerIndex);
}
inline void Animancer::ControllerState::SetLayerWeight(int32_t  layerIndex, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"SetLayerWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, weight);
}
inline int32_t Animancer::ControllerState::GetLayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::ControllerState::get_layerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"get_layerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::ControllerState::GetLayerIndex(::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerName);
}
inline ::StringW Animancer::ControllerState::GetLayerName(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetLayerName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo Animancer::ControllerState::GetCurrentAnimatorStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo Animancer::ControllerState::GetNextAnimatorStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline bool Animancer::ControllerState::HasState(int32_t  layerIndex, int32_t  stateID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"HasState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex, stateID);
}
inline bool Animancer::ControllerState::IsInTransition(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"IsInTransition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorTransitionInfo Animancer::ControllerState::GetAnimatorTransitionInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetAnimatorTransitionInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorTransitionInfo>(this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> Animancer::ControllerState::GetCurrentAnimatorClipInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(this, ___internal_method, layerIndex);
}
inline void Animancer::ControllerState::GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, clips);
}
inline int32_t Animancer::ControllerState::GetCurrentAnimatorClipInfoCount(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetCurrentAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> Animancer::ControllerState::GetNextAnimatorClipInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(this, ___internal_method, layerIndex);
}
inline void Animancer::ControllerState::GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, clips);
}
inline int32_t Animancer::ControllerState::GetNextAnimatorClipInfoCount(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerState*>(),
                        {"GetNextAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex);
}
inline ::Animancer::ControllerState* Animancer::ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ControllerState*>(controller));
}
inline ::Animancer::ControllerState* Animancer::ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ControllerState*>(controller, actionsOnStop));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ControllerState*>"
constexpr  Animancer::ControllerState::operator ::Animancer::ICopyable_1<::Animancer::ControllerState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ControllerState*>* Animancer::ControllerState::i___Animancer__ICopyable_1___Animancer__ControllerState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ControllerState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ControllerState::ControllerState()   {
}
