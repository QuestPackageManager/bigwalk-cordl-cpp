#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/HealthPool.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/StateMachines/zzzz__HealthPool_def.hpp"
#include "Animancer/Examples/FineControl/zzzz__IInteractable_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::StateMachines::HealthPool.add_OnHitReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::HealthPool::*)(::System::Action*)>(&::Animancer::Examples::StateMachines::HealthPool::add_OnHitReceived)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {"add_OnHitReceived", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::HealthPool.remove_OnHitReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::HealthPool::*)(::System::Action*)>(&::Animancer::Examples::StateMachines::HealthPool::remove_OnHitReceived)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {"remove_OnHitReceived", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::HealthPool.Interact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::HealthPool::*)()>(&::Animancer::Examples::StateMachines::HealthPool::Interact)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802fc2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {"Interact", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::StateMachines::HealthPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::StateMachines::HealthPool::*)()>(&::Animancer::Examples::StateMachines::HealthPool::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Animancer::Examples::StateMachines::HealthPool::__cordl_internal_get_OnHitReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitReceived;
}
constexpr ::System::Action* const& Animancer::Examples::StateMachines::HealthPool::__cordl_internal_get_OnHitReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitReceived;
}
constexpr void Animancer::Examples::StateMachines::HealthPool::__cordl_internal_set_OnHitReceived(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitReceived = value;
}
inline void Animancer::Examples::StateMachines::HealthPool::add_OnHitReceived(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {"add_OnHitReceived", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::StateMachines::HealthPool::remove_OnHitReceived(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {"remove_OnHitReceived", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::StateMachines::HealthPool::Interact()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {"Interact", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::StateMachines::HealthPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::StateMachines::HealthPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::StateMachines::HealthPool* Animancer::Examples::StateMachines::HealthPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::StateMachines::HealthPool*>());
}
/// @brief Convert operator to "::Animancer::Examples::FineControl::IInteractable"
constexpr  Animancer::Examples::StateMachines::HealthPool::operator ::Animancer::Examples::FineControl::IInteractable*() noexcept {
return static_cast<::Animancer::Examples::FineControl::IInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Examples::FineControl::IInteractable"
constexpr ::Animancer::Examples::FineControl::IInteractable* Animancer::Examples::StateMachines::HealthPool::i___Animancer__Examples__FineControl__IInteractable() noexcept {
return static_cast<::Animancer::Examples::FineControl::IInteractable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::HealthPool::HealthPool()   {
}
