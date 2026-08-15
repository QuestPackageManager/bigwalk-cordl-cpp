#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncAudioFilterReadTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncAudioFilterReadTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnAudioFilterReadHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::*)(::ArrayW<float_t>, int32_t)>(&::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e74d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger.GetOnAudioFilterReadAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::GetOnAudioFilterReadAsyncHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e74c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"GetOnAudioFilterReadAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger.GetOnAudioFilterReadAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::GetOnAudioFilterReadAsyncHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e74bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"GetOnAudioFilterReadAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger.OnAudioFilterReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> (::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::OnAudioFilterReadAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e74cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"OnAudioFilterReadAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger.OnAudioFilterReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> (::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::OnAudioFilterReadAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e74c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"OnAudioFilterReadAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::GetOnAudioFilterReadAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"GetOnAudioFilterReadAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::GetOnAudioFilterReadAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"GetOnAudioFilterReadAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::OnAudioFilterReadAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"OnAudioFilterReadAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::OnAudioFilterReadAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {"OnAudioFilterReadAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger* Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncAudioFilterReadTrigger::AsyncAudioFilterReadTrigger()   {
}
