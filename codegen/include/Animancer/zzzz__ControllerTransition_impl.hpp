#pragma once
// IWYU pragma private; include "Animancer/ControllerTransition.hpp"
#include "Animancer/zzzz__ControllerTransition_1_impl.hpp"
#include "Animancer/zzzz__ControllerTransition_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::Animancer::ControllerTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState* (::Animancer::ControllerTransition::*)()>(&::Animancer::ControllerTransition::CreateState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180307280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerTransition*>(),
                    {::i2c::class_of<::Animancer::ControllerTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerTransition::*)()>(&::Animancer::ControllerTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerTransition::*)(::UnityEngine::RuntimeAnimatorController*)>(&::Animancer::ControllerTransition::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerTransition.op_Implicit___Animancer__ControllerTransition_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerTransition* (*)(::UnityEngine::RuntimeAnimatorController*)>(&::Animancer::ControllerTransition::op_Implicit___Animancer__ControllerTransition_)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180307350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ControllerTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ControllerTransition::*)(::Animancer::ControllerTransition*)>(&::Animancer::ControllerTransition::CopyFrom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180307260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ControllerTransition*>(),
                    {::i2c::class_of<::Animancer::ControllerTransition*>(), 39}
                ));
    return ___internal_method;
  }
};
inline ::Animancer::ControllerState* Animancer::ControllerTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState*>(this, ___internal_method);
}
inline void Animancer::ControllerTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ControllerTransition::_ctor(::UnityEngine::RuntimeAnimatorController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::Animancer::ControllerTransition* Animancer::ControllerTransition::op_Implicit___Animancer__ControllerTransition_(::UnityEngine::RuntimeAnimatorController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerTransition*>(nullptr, ___internal_method, controller);
}
inline void Animancer::ControllerTransition::CopyFrom(::Animancer::ControllerTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::Animancer::ControllerTransition* Animancer::ControllerTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ControllerTransition*>());
}
inline ::Animancer::ControllerTransition* Animancer::ControllerTransition::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ControllerTransition*>(controller));
}
/// @brief Convert operator to "::Animancer::ControllerState_ITransition"
constexpr  Animancer::ControllerTransition::operator ::Animancer::ControllerState_ITransition*() noexcept {
return static_cast<::Animancer::ControllerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ControllerState_ITransition"
constexpr ::Animancer::ControllerState_ITransition* Animancer::ControllerTransition::i___Animancer__ControllerState_ITransition() noexcept {
return static_cast<::Animancer::ControllerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr  Animancer::ControllerTransition::operator ::Animancer::ITransition_1<::Animancer::ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ControllerState*>* Animancer::ControllerTransition::i___Animancer__ITransition_1___Animancer__ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ControllerTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ControllerTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ControllerTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ControllerTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ControllerTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ControllerTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ControllerTransition*>"
constexpr  Animancer::ControllerTransition::operator ::Animancer::ICopyable_1<::Animancer::ControllerTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ControllerTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ControllerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ControllerTransition*>* Animancer::ControllerTransition::i___Animancer__ICopyable_1___Animancer__ControllerTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ControllerTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ControllerTransition::ControllerTransition()   {
}
