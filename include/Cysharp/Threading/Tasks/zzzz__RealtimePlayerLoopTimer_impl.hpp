#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/RealtimePlayerLoopTimer.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ValueStopwatch_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTimer_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__RealtimePlayerLoopTimer_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::*)(::System::TimeSpan, bool, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e5fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer.MoveNextCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::MoveNextCore)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e62e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer.ResetCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::*)(::System::Nullable_1<::System::TimeSpan>)>(&::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::ResetCore)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e62e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch& Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::__cordl_internal_get_stopwatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopwatch;
}
constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch const& Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::__cordl_internal_get_stopwatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopwatch;
}
constexpr void Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::__cordl_internal_set_stopwatch(::Cysharp::Threading::Tasks::Internal::ValueStopwatch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopwatch = value;
}
constexpr int64_t& Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::__cordl_internal_get_intervalTicks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intervalTicks;
}
constexpr int64_t const& Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::__cordl_internal_get_intervalTicks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intervalTicks;
}
constexpr void Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::__cordl_internal_set_intervalTicks(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intervalTicks = value;
}
inline void Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::_ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval, periodic, playerLoopTiming, cancellationToken, timerCallback, state);
}
inline bool Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::MoveNextCore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::ResetCore(::System::Nullable_1<::System::TimeSpan>  interval)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval);
}
inline ::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer* Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::New_ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*>(interval, periodic, playerLoopTiming, cancellationToken, timerCallback, state));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer::RealtimePlayerLoopTimer()   {
}
