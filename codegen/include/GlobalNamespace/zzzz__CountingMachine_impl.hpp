#pragma once
// IWYU pragma private; include "GlobalNamespace/CountingMachine.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountingMachine_def.hpp"
#include "GlobalNamespace/zzzz__CountingDisplay_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.get_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CountingMachine::*)()>(&::GlobalNamespace::CountingMachine::get_isServer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fbd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"get_isServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.get_currentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CountingMachine::*)()>(&::GlobalNamespace::CountingMachine::get_currentValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803fbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"get_currentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.set_currentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)(int32_t)>(&::GlobalNamespace::CountingMachine::set_currentValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803fbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"set_currentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)()>(&::GlobalNamespace::CountingMachine::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803fba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.OnValueChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingMachine::OnValueChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803fbb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"OnValueChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingMachine::Increment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803fbb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"Increment", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.Decrement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CountingMachine::Decrement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803fbb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"Decrement", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.ServerUnprime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)()>(&::GlobalNamespace::CountingMachine::ServerUnprime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803fbc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"ServerUnprime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine.ServerPrime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)()>(&::GlobalNamespace::CountingMachine::ServerPrime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803fbbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"ServerPrime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountingMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountingMachine::*)()>(&::GlobalNamespace::CountingMachine::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CountingDisplay>& GlobalNamespace::CountingMachine::__cordl_internal_get_countingDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CountingDisplay> const& GlobalNamespace::CountingMachine::__cordl_internal_get_countingDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countingDisplay;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_countingDisplay(::UnityW<::GlobalNamespace::CountingDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countingDisplay = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingMachine::__cordl_internal_get_valueStorageSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueStorageSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingMachine::__cordl_internal_get_valueStorageSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueStorageSystem;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_valueStorageSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueStorageSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingMachine::__cordl_internal_get_incrementSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingMachine::__cordl_internal_get_incrementSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementSystem;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_incrementSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incrementSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CountingMachine::__cordl_internal_get_decrementSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decrementSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CountingMachine::__cordl_internal_get_decrementSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decrementSystem;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_decrementSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decrementSystem = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>& GlobalNamespace::CountingMachine::__cordl_internal_get_primeSwitches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primeSwitches;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>> const& GlobalNamespace::CountingMachine::__cordl_internal_get_primeSwitches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primeSwitches;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_primeSwitches(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primeSwitches = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>& GlobalNamespace::CountingMachine::__cordl_internal_get_unprimeSwitches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unprimeSwitches;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>> const& GlobalNamespace::CountingMachine::__cordl_internal_get_unprimeSwitches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unprimeSwitches;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_unprimeSwitches(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unprimeSwitches = value;
}
constexpr bool& GlobalNamespace::CountingMachine::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CountingMachine::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::CountingMachine::__cordl_internal_get_tweenedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tweenedValue;
}
constexpr float_t const& GlobalNamespace::CountingMachine::__cordl_internal_get_tweenedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tweenedValue;
}
constexpr void GlobalNamespace::CountingMachine::__cordl_internal_set_tweenedValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tweenedValue = value;
}
inline bool GlobalNamespace::CountingMachine::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"get_isServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CountingMachine::get_currentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"get_currentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CountingMachine::set_currentValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"set_currentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CountingMachine::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingMachine::OnValueChange(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"OnValueChange", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingMachine::Increment(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"Increment", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingMachine::Decrement(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"Decrement", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CountingMachine::ServerUnprime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"ServerUnprime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingMachine::ServerPrime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {"ServerPrime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountingMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CountingMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CountingMachine* GlobalNamespace::CountingMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CountingMachine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountingMachine::CountingMachine()   {
}
