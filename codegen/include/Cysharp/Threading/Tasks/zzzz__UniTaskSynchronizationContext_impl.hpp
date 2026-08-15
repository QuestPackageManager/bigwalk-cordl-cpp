#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskSynchronizationContext.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskSynchronizationContext_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskSynchronizationContext_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180397590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::*)()>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::Invoke)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e7cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::_ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, state);
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "callback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::UniTaskSynchronizationContext_Callback(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) noexcept  {
this->callback = callback;
this->state = state;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback::UniTaskSynchronizationContext_Callback()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181113b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181e83f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext.OperationStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::*)()>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::OperationStarted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e83f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext.OperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::*)()>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::OperationCompleted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e83ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext.CreateCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::*)()>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                    {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::Run)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181e84360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::*)()>(&::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_gate(::System::Threading::SpinLock  value)  {
::cordl_internals::setStaticField<::System::Threading::SpinLock, "gate", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<::System::Threading::SpinLock>(value));
}
inline ::System::Threading::SpinLock Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_gate()  {
return ::cordl_internals::getStaticField<::System::Threading::SpinLock, "gate", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_dequing(bool  value)  {
::cordl_internals::setStaticField<bool, "dequing", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<bool>(value));
}
inline bool Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_dequing()  {
return ::cordl_internals::getStaticField<bool, "dequing", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_actionListCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "actionListCount", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<int32_t>(value));
}
inline int32_t Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_actionListCount()  {
return ::cordl_internals::getStaticField<int32_t, "actionListCount", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_actionList(::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>, "actionList", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>>(value));
}
inline ::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback> Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_actionList()  {
return ::cordl_internals::getStaticField<::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>, "actionList", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_waitingListCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "waitingListCount", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<int32_t>(value));
}
inline int32_t Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_waitingListCount()  {
return ::cordl_internals::getStaticField<int32_t, "waitingListCount", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_waitingList(::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>, "waitingList", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>>(value));
}
inline ::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback> Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_waitingList()  {
return ::cordl_internals::getStaticField<::ArrayW<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>, "waitingList", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::setStaticF_opCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "opCount", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(std::forward<int32_t>(value));
}
inline int32_t Cysharp::Threading::Tasks::UniTaskSynchronizationContext::getStaticF_opCount()  {
return ::cordl_internals::getStaticField<int32_t, "opCount", ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>();
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::Send(::System::Threading::SendOrPostCallback*  d, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::Post(::System::Threading::SendOrPostCallback*  d, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, state);
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::OperationStarted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::OperationCompleted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* Cysharp::Threading::Tasks::UniTaskSynchronizationContext::CreateCopy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UniTaskSynchronizationContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext* Cysharp::Threading::Tasks::UniTaskSynchronizationContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext::UniTaskSynchronizationContext()   {
}
