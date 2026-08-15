#pragma once
// IWYU pragma private; include "Animancer/Float1ControllerState.hpp"
#include "Animancer/zzzz__ControllerState_impl.hpp"
#include "Animancer/zzzz__Float1ControllerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__Float1ControllerState_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr  Animancer::Float1ControllerState_ITransition::operator ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>* Animancer::Float1ControllerState_ITransition::i___Animancer__ITransition_1___Animancer__Float1ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::Float1ControllerState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::Float1ControllerState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::Float1ControllerState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::Float1ControllerState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::Float1ControllerState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::Float1ControllerState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::Float1ControllerState.get_ParameterID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (::Animancer::Float1ControllerState::*)()>(&::Animancer::Float1ControllerState::get_ParameterID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"get_ParameterID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState.set_ParameterID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerState::*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::Float1ControllerState::set_ParameterID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802edd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"set_ParameterID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState.get_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Float1ControllerState::*)()>(&::Animancer::Float1ControllerState::get_Parameter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802edd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"get_Parameter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState.set_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerState::*)(float_t)>(&::Animancer::Float1ControllerState::set_Parameter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802edd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"set_Parameter", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::Animancer::ControllerState_ParameterID, ::ArrayW<::Animancer::ControllerState_ActionOnStop>)>(&::Animancer::Float1ControllerState::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802edc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::Animancer::ControllerState_ParameterID)>(&::Animancer::Float1ControllerState::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802edca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::Float1ControllerState::*)()>(&::Animancer::Float1ControllerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float1ControllerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState.GetParameterHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::Float1ControllerState::*)(int32_t)>(&::Animancer::Float1ControllerState::GetParameterHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float1ControllerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::Float1ControllerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::Float1ControllerState::Clone)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802edb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float1ControllerState*>(), 59}
                ));
    return ___internal_method;
  }
};
constexpr ::Animancer::ControllerState_ParameterID& Animancer::Float1ControllerState::__cordl_internal_get__ParameterID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterID;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::Float1ControllerState::__cordl_internal_get__ParameterID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterID;
}
constexpr void Animancer::Float1ControllerState::__cordl_internal_set__ParameterID(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterID = value;
}
inline ::Animancer::ControllerState_ParameterID Animancer::Float1ControllerState::get_ParameterID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"get_ParameterID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(this, ___internal_method);
}
inline void Animancer::Float1ControllerState::set_ParameterID(::Animancer::ControllerState_ParameterID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"set_ParameterID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Float1ControllerState::get_Parameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"get_Parameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Float1ControllerState::set_Parameter(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {"set_Parameter", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Float1ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameter, actionsOnStop);
}
inline void Animancer::Float1ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameter);
}
inline int32_t Animancer::Float1ControllerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float1ControllerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::Float1ControllerState::GetParameterHash(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float1ControllerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerState* Animancer::Float1ControllerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float1ControllerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline ::Animancer::Float1ControllerState* Animancer::Float1ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float1ControllerState*>(controller, parameter, actionsOnStop));
}
inline ::Animancer::Float1ControllerState* Animancer::Float1ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float1ControllerState*>(controller, parameter));
}
// Ctor Parameters []
constexpr ::Animancer::Float1ControllerState::Float1ControllerState()   {
}
