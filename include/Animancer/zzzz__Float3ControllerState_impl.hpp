#pragma once
// IWYU pragma private; include "Animancer/Float3ControllerState.hpp"
#include "Animancer/zzzz__ControllerState_impl.hpp"
#include "Animancer/zzzz__Float3ControllerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__Float3ControllerState_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float3ControllerState*>"
constexpr  Animancer::Float3ControllerState_ITransition::operator ::Animancer::ITransition_1<::Animancer::Float3ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float3ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float3ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float3ControllerState*>* Animancer::Float3ControllerState_ITransition::i___Animancer__ITransition_1___Animancer__Float3ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float3ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::Float3ControllerState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::Float3ControllerState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::Float3ControllerState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::Float3ControllerState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::Float3ControllerState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::Float3ControllerState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterXID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterXID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterXID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_ParameterXID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::Float3ControllerState::set_ParameterXID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802edd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterXID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterX)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802edd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(float_t)>(&::Animancer::Float3ControllerState::set_ParameterX)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802edd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterYID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterYID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterYID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_ParameterYID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::Float3ControllerState::set_ParameterYID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ee0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterYID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterY)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ee000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(float_t)>(&::Animancer::Float3ControllerState::set_ParameterY)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ee0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterZID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState_ParameterID (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterZID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterZID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_ParameterZID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(::Animancer::ControllerState_ParameterID)>(&::Animancer::Float3ControllerState::set_ParameterZID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ee500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterZID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterZ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ee420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_ParameterZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(float_t)>(&::Animancer::Float3ControllerState::set_ParameterZ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ee520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_Parameter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802ee450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_Parameter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.set_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(::UnityEngine::Vector3)>(&::Animancer::Float3ControllerState::set_Parameter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ee550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_Parameter", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::Animancer::ControllerState_ParameterID, ::Animancer::ControllerState_ParameterID, ::Animancer::ControllerState_ParameterID, ::ArrayW<::Animancer::ControllerState_ActionOnStop>)>(&::Animancer::Float3ControllerState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802ee360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float3ControllerState::*)(::UnityEngine::RuntimeAnimatorController*, ::Animancer::ControllerState_ParameterID, ::Animancer::ControllerState_ParameterID, ::Animancer::ControllerState_ParameterID)>(&::Animancer::Float3ControllerState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802ee2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::Float3ControllerState::*)()>(&::Animancer::Float3ControllerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float3ControllerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.GetParameterHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::Float3ControllerState::*)(int32_t)>(&::Animancer::Float3ControllerState::GetParameterHash)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ee270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float3ControllerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float3ControllerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::Float3ControllerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::Float3ControllerState::Clone)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802ee150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                    {::i2c::class_of<::Animancer::Float3ControllerState*>(), 59}
                ));
    return ___internal_method;
  }
};
constexpr ::Animancer::ControllerState_ParameterID& Animancer::Float3ControllerState::__cordl_internal_get__ParameterXID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterXID;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::Float3ControllerState::__cordl_internal_get__ParameterXID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterXID;
}
constexpr void Animancer::Float3ControllerState::__cordl_internal_set__ParameterXID(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterXID = value;
}
constexpr ::Animancer::ControllerState_ParameterID& Animancer::Float3ControllerState::__cordl_internal_get__ParameterYID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterYID;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::Float3ControllerState::__cordl_internal_get__ParameterYID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterYID;
}
constexpr void Animancer::Float3ControllerState::__cordl_internal_set__ParameterYID(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterYID = value;
}
constexpr ::Animancer::ControllerState_ParameterID& Animancer::Float3ControllerState::__cordl_internal_get__ParameterZID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterZID;
}
constexpr ::Animancer::ControllerState_ParameterID const& Animancer::Float3ControllerState::__cordl_internal_get__ParameterZID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterZID;
}
constexpr void Animancer::Float3ControllerState::__cordl_internal_set__ParameterZID(::Animancer::ControllerState_ParameterID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterZID = value;
}
inline ::Animancer::ControllerState_ParameterID Animancer::Float3ControllerState::get_ParameterXID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterXID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_ParameterXID(::Animancer::ControllerState_ParameterID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterXID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Float3ControllerState::get_ParameterX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_ParameterX(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::ControllerState_ParameterID Animancer::Float3ControllerState::get_ParameterYID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterYID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_ParameterYID(::Animancer::ControllerState_ParameterID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterYID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Float3ControllerState::get_ParameterY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_ParameterY(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::ControllerState_ParameterID Animancer::Float3ControllerState::get_ParameterZID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterZID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState_ParameterID>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_ParameterZID(::Animancer::ControllerState_ParameterID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterZID", {}, {::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::Float3ControllerState::get_ParameterZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_ParameterZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_ParameterZ(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_ParameterZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Animancer::Float3ControllerState::get_Parameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"get_Parameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::Float3ControllerState::set_Parameter(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {"set_Parameter", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Float3ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::ArrayW<::Animancer::ControllerState_ActionOnStop>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameterX, parameterY, parameterZ, actionsOnStop);
}
inline void Animancer::Float3ControllerState::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float3ControllerState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>(), ::i2c::type_of<::Animancer::ControllerState_ParameterID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameterX, parameterY, parameterZ);
}
inline int32_t Animancer::Float3ControllerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float3ControllerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::Float3ControllerState::GetParameterHash(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float3ControllerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerState* Animancer::Float3ControllerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float3ControllerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline ::Animancer::Float3ControllerState* Animancer::Float3ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float3ControllerState*>(controller, parameterX, parameterY, parameterZ, actionsOnStop));
}
inline ::Animancer::Float3ControllerState* Animancer::Float3ControllerState::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float3ControllerState*>(controller, parameterX, parameterY, parameterZ));
}
// Ctor Parameters []
constexpr ::Animancer::Float3ControllerState::Float3ControllerState()   {
}
