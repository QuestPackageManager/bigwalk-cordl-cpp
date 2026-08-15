#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TimeoutController.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TimeoutController_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTimer_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController.CancelCancellationTokenSourceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::TimeoutController::CancelCancellationTokenSourceState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e5e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"CancelCancellationTokenSourceState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TimeoutController::*)(::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::TimeoutController::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e63f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TimeoutController::*)(::System::Threading::CancellationTokenSource*, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::TimeoutController::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e63e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController.Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::Cysharp::Threading::Tasks::TimeoutController::*)(int32_t)>(&::Cysharp::Threading::Tasks::TimeoutController::Timeout)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e63de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Timeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController.Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::Cysharp::Threading::Tasks::TimeoutController::*)(::System::TimeSpan)>(&::Cysharp::Threading::Tasks::TimeoutController::Timeout)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181e63b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Timeout", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController.IsTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::TimeoutController::*)()>(&::Cysharp::Threading::Tasks::TimeoutController::IsTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e63b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"IsTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TimeoutController::*)()>(&::Cysharp::Threading::Tasks::TimeoutController::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e63b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::TimeoutController.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::TimeoutController::*)()>(&::Cysharp::Threading::Tasks::TimeoutController::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e63a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_timeoutSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_timeoutSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeoutSource;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_timeoutSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeoutSource = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_linkedSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_linkedSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSource;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_linkedSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedSource = value;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTimer*& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTimer* const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_timer(::Cysharp::Threading::Tasks::PlayerLoopTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr bool& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr bool const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
constexpr ::Cysharp::Threading::Tasks::DelayType& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_delayType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayType;
}
constexpr ::Cysharp::Threading::Tasks::DelayType const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_delayType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayType;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_delayType(::Cysharp::Threading::Tasks::DelayType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayType = value;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_delayTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTiming;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_delayTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTiming;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_delayTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayTiming = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_originalLinkCancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalLinkCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_get_originalLinkCancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalLinkCancellationTokenSource;
}
constexpr void Cysharp::Threading::Tasks::TimeoutController::__cordl_internal_set_originalLinkCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalLinkCancellationTokenSource = value;
}
inline void Cysharp::Threading::Tasks::TimeoutController::setStaticF_CancelCancellationTokenSourceStateDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "CancelCancellationTokenSourceStateDelegate", ::Cysharp::Threading::Tasks::TimeoutController*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::TimeoutController::getStaticF_CancelCancellationTokenSourceStateDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "CancelCancellationTokenSourceStateDelegate", ::Cysharp::Threading::Tasks::TimeoutController*>();
}
inline void Cysharp::Threading::Tasks::TimeoutController::CancelCancellationTokenSourceState(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"CancelCancellationTokenSourceState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void Cysharp::Threading::Tasks::TimeoutController::_ctor(::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delayType, delayTiming);
}
inline void Cysharp::Threading::Tasks::TimeoutController::_ctor(::System::Threading::CancellationTokenSource*  linkCancellationTokenSource, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkCancellationTokenSource, delayType, delayTiming);
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::TimeoutController::Timeout(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Timeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method, millisecondsTimeout);
}
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::TimeoutController::Timeout(::System::TimeSpan  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Timeout", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method, timeout);
}
inline bool Cysharp::Threading::Tasks::TimeoutController::IsTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"IsTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::TimeoutController::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::TimeoutController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::TimeoutController*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::TimeoutController* Cysharp::Threading::Tasks::TimeoutController::New_ctor(::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::TimeoutController*>(delayType, delayTiming));
}
inline ::Cysharp::Threading::Tasks::TimeoutController* Cysharp::Threading::Tasks::TimeoutController::New_ctor(::System::Threading::CancellationTokenSource*  linkCancellationTokenSource, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::TimeoutController*>(linkCancellationTokenSource, delayType, delayTiming));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::TimeoutController::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::TimeoutController::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::TimeoutController::TimeoutController()   {
}
