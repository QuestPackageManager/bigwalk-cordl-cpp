#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncDestroyTrigger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncDestroyTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncDestroyTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::*)(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger>& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::__cordl_internal_get_trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
constexpr ::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger> const& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::__cordl_internal_get_trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::__cordl_internal_set_trigger(::UnityW<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trigger = value;
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline bool Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor* Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*  trigger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor*>(trigger));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger_AwakeMonitor::AsyncDestroyTrigger_AwakeMonitor()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c._OnDestroyAsync_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::_OnDestroyAsync_b__7_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e821a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(),
                        {"<OnDestroyAsync>b__7_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::setStaticF___9(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*, "<>9", ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(std::forward<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(value));
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c* Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*, "<>9", ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>();
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::setStaticF___9__7_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__7_0", ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__7_0", ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>();
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::_OnDestroyAsync_b__7_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>(),
                        {"<OnDestroyAsync>b__7_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c* Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger___c::AsyncDestroyTrigger___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger.get_CancellationToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::get_CancellationToken)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e75f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"get_CancellationToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::Awake)> {
  constexpr static std::size_t size = 0x3350;
  constexpr static std::size_t addrs = 0x1812fa9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e75f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger.OnDestroyAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::OnDestroyAsync)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181e75d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"OnDestroyAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_get_awakeCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeCalled;
}
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_get_awakeCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeCalled;
}
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_set_awakeCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awakeCalled = value;
}
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_get_called()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_get_called() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_set_called(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___called = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_get_cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_get_cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::__cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenSource = value;
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::get_CancellationToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"get_CancellationToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::OnDestroyAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {"OnDestroyAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger::AsyncDestroyTrigger()   {
}
