#pragma once
// IWYU pragma private; include "Animancer/Float2ControllerState.hpp"
#include "Animancer/zzzz__ControllerState_impl.hpp"
#include "Animancer/zzzz__Float2ControllerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__Float2ControllerState_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr  Animancer::Float2ControllerState_ITransition::operator ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>* Animancer::Float2ControllerState_ITransition::i___Animancer__ITransition_1___Animancer__Float2ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::Float2ControllerState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::Float2ControllerState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::Float2ControllerState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::Float2ControllerState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::Float2ControllerState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::Float2ControllerState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::Float2ControllerState.get_ParameterXID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (::Animancer::Float2ControllerState::*)()>(&::Animancer::Float2ControllerState::get_ParameterXID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterXID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.set_ParameterXID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::Float2ControllerState::set_ParameterXID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802edd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterXID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.get_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Float2ControllerState::*)()>(&::Animancer::Float2ControllerState::get_ParameterX)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802edd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.set_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(float_t)>(&::Animancer::Float2ControllerState::set_ParameterX)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802edd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.get_ParameterYID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (::Animancer::Float2ControllerState::*)()>(&::Animancer::Float2ControllerState::get_ParameterYID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterYID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.set_ParameterYID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::Float2ControllerState::set_ParameterYID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ee0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterYID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.get_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Float2ControllerState::*)()>(&::Animancer::Float2ControllerState::get_ParameterY)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ee000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.set_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(float_t)>(&::Animancer::Float2ControllerState::set_ParameterY)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ee0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.get_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Animancer::Float2ControllerState::*)()>(&::Animancer::Float2ControllerState::get_Parameter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ee030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_Parameter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.set_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(::UnityEngine::Vector2)>(&::Animancer::Float2ControllerState::set_Parameter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ee0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_Parameter", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::Animancer::ControllerState_ParameterID, ::Animancer::ControllerState_ParameterID, ::ArrayW<::Animancer::ControllerState_ActionOnStop>)>(&::Animancer::Float2ControllerState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802edee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::Animancer::ControllerState_ParameterID, ::Animancer::ControllerState_ParameterID)>(&::Animancer::Float2ControllerState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802edf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::Float2ControllerState::*)()>(&::Animancer::Float2ControllerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float2ControllerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.GetParameterHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::Float2ControllerState::*)(int32_t)>(&::Animancer::Float2ControllerState::GetParameterHash)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802edea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float2ControllerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::Float2ControllerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::Float2ControllerState::Clone)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802edda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float2ControllerState*>(), 59}
                ));
    return ___internal_method;
  }
};
constexpr ::Animancer::ControllerState_ParameterID& Animancer::Float2ControllerState::__cordl_internal_get__ParameterXID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterXID;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::Float2ControllerState::__cordl_internal_get__ParameterXID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterXID;
}
constexpr void Animancer::Float2ControllerState::__cordl_internal_set__ParameterXID(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterXID = value;
}
constexpr ::Animancer::ControllerState_ParameterID& Animancer::Float2ControllerState::__cordl_internal_get__ParameterYID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterYID;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::Float2ControllerState::__cordl_internal_get__ParameterYID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterYID;
}
constexpr void Animancer::Float2ControllerState::__cordl_internal_set__ParameterYID(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterYID = value;
}
inline ::Animancer::ControllerState_ParameterID Animancer::Float2ControllerState::get_ParameterXID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterXID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(this, ___internal_method);
}
inline void Animancer::Float2ControllerState::set_ParameterXID(::Animancer::ControllerState_ParameterID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterXID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Float2ControllerState::get_ParameterX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Float2ControllerState::set_ParameterX(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::ControllerState_ParameterID Animancer::Float2ControllerState::get_ParameterYID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterYID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(this, ___internal_method);
}
inline void Animancer::Float2ControllerState::set_ParameterYID(::Animancer::ControllerState_ParameterID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterYID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Float2ControllerState::get_ParameterY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Float2ControllerState::set_ParameterY(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Animancer::Float2ControllerState::get_Parameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"get_Parameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Animancer::Float2ControllerState::set_Parameter(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {"set_Parameter", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Float2ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameterX, parameterY, actionsOnStop);
}
inline void Animancer::Float2ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameterX, parameterY);
}
inline int32_t Animancer::Float2ControllerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float2ControllerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::Float2ControllerState::GetParameterHash(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float2ControllerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerState* Animancer::Float2ControllerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float2ControllerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline ::Animancer::Float2ControllerState* Animancer::Float2ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float2ControllerState*>(controller, parameterX, parameterY, actionsOnStop));
}
inline ::Animancer::Float2ControllerState* Animancer::Float2ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float2ControllerState*>(controller, parameterX, parameterY));
}
// Ctor Parameters []
constexpr ::Animancer::Float2ControllerState::Float2ControllerState()   {
}
