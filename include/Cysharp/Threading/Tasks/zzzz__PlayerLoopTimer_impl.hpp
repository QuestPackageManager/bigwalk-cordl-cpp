#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/PlayerLoopTimer.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTimer_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)(bool, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e62db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::PlayerLoopTimer* (*)(::System::TimeSpan, bool, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::Create)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e62a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Create", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::PlayerLoopTimer* (*)(::System::TimeSpan, bool, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::StartNew)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e62cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"StartNew", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::Restart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e62ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Restart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)(::System::TimeSpan)>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::Restart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e62c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Restart", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::Stop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e62da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.ResetCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)(::System::Nullable_1<::System::TimeSpan>)>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::ResetCore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e62b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.Cysharp_Threading_Tasks_IPlayerLoopItem_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::Cysharp_Threading_Tasks_IPlayerLoopItem_MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e62af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Cysharp.Threading.Tasks.IPlayerLoopItem.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopTimer.MoveNextCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::PlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopTimer::MoveNextCore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Action_1<::System::Object*>*& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_timerCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerCallback;
}
constexpr ::System::Action_1<::System::Object*>* const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_timerCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerCallback;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_timerCallback(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerCallback = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_state(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_playerLoopTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLoopTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_playerLoopTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLoopTiming;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_playerLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLoopTiming = value;
}
constexpr bool& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_periodic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___periodic;
}
constexpr bool const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_periodic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___periodic;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_periodic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___periodic = value;
}
constexpr bool& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_isRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRunning;
}
constexpr bool const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_isRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRunning;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_isRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRunning = value;
}
constexpr bool& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_tryStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryStop;
}
constexpr bool const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_tryStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryStop;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_tryStop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryStop = value;
}
constexpr bool& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr bool const& Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopTimer::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
inline void Cysharp::Threading::Tasks::PlayerLoopTimer::_ctor(bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, periodic, playerLoopTiming, cancellationToken, timerCallback, state);
}
inline ::Cysharp::Threading::Tasks::PlayerLoopTimer* Cysharp::Threading::Tasks::PlayerLoopTimer::Create(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Create", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(nullptr, ___internal_method, interval, periodic, delayType, playerLoopTiming, cancellationToken, timerCallback, state);
}
inline ::Cysharp::Threading::Tasks::PlayerLoopTimer* Cysharp::Threading::Tasks::PlayerLoopTimer::StartNew(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"StartNew", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(nullptr, ___internal_method, interval, periodic, delayType, playerLoopTiming, cancellationToken, timerCallback, state);
}
inline void Cysharp::Threading::Tasks::PlayerLoopTimer::Restart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Restart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::PlayerLoopTimer::Restart(::System::TimeSpan  interval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Restart", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval);
}
inline void Cysharp::Threading::Tasks::PlayerLoopTimer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::PlayerLoopTimer::ResetCore(::System::Nullable_1<::System::TimeSpan>  newInterval)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInterval);
}
inline void Cysharp::Threading::Tasks::PlayerLoopTimer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopTimer::Cysharp_Threading_Tasks_IPlayerLoopItem_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(),
                        {"Cysharp.Threading.Tasks.IPlayerLoopItem.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopTimer::MoveNextCore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::PlayerLoopTimer* Cysharp::Threading::Tasks::PlayerLoopTimer::New_ctor(bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::PlayerLoopTimer*>(periodic, playerLoopTiming, cancellationToken, timerCallback, state));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::PlayerLoopTimer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::PlayerLoopTimer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::PlayerLoopTimer::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::PlayerLoopTimer::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTimer::PlayerLoopTimer()   {
}
