#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AutoResetUniTaskCompletionSource.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AutoResetUniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AutoResetUniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ICancelPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IRejectPromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IResolvePromise_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e683e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::setStaticF___9(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*, "<>9", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>(std::forward<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*, "<>9", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>();
}
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c::AutoResetUniTaskCompletionSource___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*> (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* (*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::Create)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.CreateFromCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* (*)(::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::CreateFromCanceled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"CreateFromCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.CreateFromException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* (*)(::System::Exception*, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::CreateFromException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"CreateFromException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.CreateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* (*)(::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::CreateCompleted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"CreateCompleted", {}, {::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.get_Task
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::get_Task)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e5cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"get_Task", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.TrySetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TrySetResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e5cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TrySetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.TrySetCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TrySetCanceled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180ed10c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.TrySetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TrySetException)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180ed11c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::GetResult)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e5cb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::GetStatus)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180ed0c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x1020;
  constexpr static std::size_t addrs = 0x180c3ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::OnCompleted)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180ed0e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::*)()>(&::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TryReturn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e5cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* const& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr int16_t& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int16_t const& Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::__cordl_internal_set_version(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>, "pool", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*> Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>, "pool", ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*> Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(nullptr, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::CreateFromCanceled(::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"CreateFromCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(nullptr, ___internal_method, cancellationToken, token);
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::CreateFromException(::System::Exception*  exception, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"CreateFromException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(nullptr, ___internal_method, exception, token);
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::CreateCompleted(::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"CreateCompleted", {}, {::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(nullptr, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TrySetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TrySetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TrySetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cancellationToken);
}
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TrySetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AutoResetUniTaskCompletionSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise"
constexpr ::Cysharp::Threading::Tasks::IPromise* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___Cysharp__Threading__Tasks__IPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IResolvePromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___Cysharp__Threading__Tasks__IResolvePromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IResolvePromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___Cysharp__Threading__Tasks__IRejectPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IRejectPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr  Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::operator ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::i___Cysharp__Threading__Tasks__ICancelPromise() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ICancelPromise*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource::AutoResetUniTaskCompletionSource()   {
}
