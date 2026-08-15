#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/DeltaTimePlayerLoopTimer.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTimer_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DeltaTimePlayerLoopTimer_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::*)(::System::TimeSpan, bool, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e5fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer.MoveNextCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::*)()>(&::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::MoveNextCore)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e5f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer.ResetCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::*)(::System::Nullable_1<::System::TimeSpan>)>(&::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::ResetCore)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e5fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_get_initialFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr int32_t const& Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_get_initialFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr void Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_set_initialFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialFrame = value;
}
constexpr float_t& Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_get_elapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsed;
}
constexpr float_t const& Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_get_elapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsed;
}
constexpr void Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_set_elapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elapsed = value;
}
constexpr float_t& Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_get_interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr float_t const& Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_get_interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr void Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::__cordl_internal_set_interval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interval = value;
}
inline void Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::_ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval, periodic, playerLoopTiming, cancellationToken, timerCallback, state);
}
inline bool Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::MoveNextCore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::ResetCore(::System::Nullable_1<::System::TimeSpan>  interval)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval);
}
inline ::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer* Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::New_ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer*>(interval, periodic, playerLoopTiming, cancellationToken, timerCallback, state));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::DeltaTimePlayerLoopTimer::DeltaTimePlayerLoopTimer()   {
}
