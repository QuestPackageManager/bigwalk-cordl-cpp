#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncLazy.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncLazy_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncLazy::*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*)>(&::Cysharp::Threading::Tasks::AsyncLazy::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e5c530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncLazy::*)(::Cysharp::Threading::Tasks::UniTask)>(&::Cysharp::Threading::Tasks::AsyncLazy::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181e5c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::AsyncLazy::*)()>(&::Cysharp::Threading::Tasks::AsyncLazy::get_Task)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e5c590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"get_Task", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_Awaiter (::Cysharp::Threading::Tasks::AsyncLazy::*)()>(&::Cysharp::Threading::Tasks::AsyncLazy::GetAwaiter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e5c160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncLazy::*)()>(&::Cysharp::Threading::Tasks::AsyncLazy::EnsureInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e5c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy.EnsureInitializedCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncLazy::*)()>(&::Cysharp::Threading::Tasks::AsyncLazy::EnsureInitializedCore)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181e5bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"EnsureInitializedCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy.SetCompletionSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncLazy::*)(::by_ref<::Cysharp::Threading::Tasks::UniTask_Awaiter>)>(&::Cysharp::Threading::Tasks::AsyncLazy::SetCompletionSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5c1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"SetCompletionSource", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_Awaiter>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncLazy.SetCompletionSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AsyncLazy::SetCompletionSource)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e5c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"SetCompletionSource", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_taskFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskFactory;
}
constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* const& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_taskFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskFactory;
}
constexpr void Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_set_taskFactory(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taskFactory = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_completionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_completionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr void Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completionSource = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTask_Awaiter& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
constexpr ::Cysharp::Threading::Tasks::UniTask_Awaiter const& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
constexpr void Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_set_awaiter(::Cysharp::Threading::Tasks::UniTask_Awaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_syncLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncLock;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_syncLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncLock;
}
constexpr void Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_set_syncLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncLock = value;
}
constexpr bool& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void Cysharp::Threading::Tasks::AsyncLazy::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void Cysharp::Threading::Tasks::AsyncLazy::setStaticF_continuation(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "continuation", ::Cysharp::Threading::Tasks::AsyncLazy*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AsyncLazy::getStaticF_continuation()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "continuation", ::Cysharp::Threading::Tasks::AsyncLazy*>();
}
inline void Cysharp::Threading::Tasks::AsyncLazy::_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  taskFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taskFactory);
}
inline void Cysharp::Threading::Tasks::AsyncLazy::_ctor(::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::AsyncLazy::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_Awaiter Cysharp::Threading::Tasks::AsyncLazy::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_Awaiter>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncLazy::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncLazy::EnsureInitializedCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"EnsureInitializedCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncLazy::SetCompletionSource(::by_ref<::Cysharp::Threading::Tasks::UniTask_Awaiter>  awaiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"SetCompletionSource", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_Awaiter>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, awaiter);
}
inline void Cysharp::Threading::Tasks::AsyncLazy::SetCompletionSource(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncLazy*>(),
                        {"SetCompletionSource", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::AsyncLazy* Cysharp::Threading::Tasks::AsyncLazy::New_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  taskFactory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncLazy*>(taskFactory));
}
inline ::Cysharp::Threading::Tasks::AsyncLazy* Cysharp::Threading::Tasks::AsyncLazy::New_ctor(::Cysharp::Threading::Tasks::UniTask  task)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncLazy*>(task));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncLazy::AsyncLazy()   {
}
