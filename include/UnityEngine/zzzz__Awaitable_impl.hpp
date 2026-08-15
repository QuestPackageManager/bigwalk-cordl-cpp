#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::Awaitable_AwaiterCompletionThreadAffinity(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::Awaitable_AwaiterCompletionThreadAffinity()   {
}
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity  UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity  UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::MainThread{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity  UnityEngine::Awaitable_AwaiterCompletionThreadAffinity::BackgroundThread{static_cast<int32_t>(0x2)};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_resultingCoroutine", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder::Awaitable_AwaitableAsyncMethodBuilder(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*  _stateMachineBox, ::UnityEngine::Awaitable*  _resultingCoroutine) noexcept  {
this->_stateMachineBox = _stateMachineBox;
this->_resultingCoroutine = _resultingCoroutine;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder::Awaitable_AwaitableAsyncMethodBuilder()   {
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_resultingCoroutine", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1<T>::Awaitable_AwaitableAsyncMethodBuilder_1(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*  _stateMachineBox, ::UnityEngine::Awaitable_1<T>*  _resultingCoroutine) noexcept  {
this->_stateMachineBox = _stateMachineBox;
this->_resultingCoroutine = _resultingCoroutine;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1<T>::Awaitable_AwaitableAsyncMethodBuilder_1()   {
}
//  Writing Method size for method: ::UnityEngine::Awaitable_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_Awaiter::*)(::UnityEngine::Awaitable*)>(&::UnityEngine::Awaitable_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Awaitable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_Awaiter::*)(::System::Action*)>(&::UnityEngine::Awaitable_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x5bb0;
  constexpr static std::size_t addrs = 0x1806cbc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable_Awaiter::*)()>(&::UnityEngine::Awaitable_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18226f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_Awaiter::*)()>(&::UnityEngine::Awaitable_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e5bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Awaitable_Awaiter::_ctor(::UnityEngine::Awaitable*  awaited)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Awaitable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaited);
}
inline void UnityEngine::Awaitable_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline bool UnityEngine::Awaitable_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Awaitable_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  UnityEngine::Awaitable_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* UnityEngine::Awaitable_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_awaited", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_Awaiter::Awaitable_Awaiter(::UnityEngine::Awaitable*  _awaited) noexcept  {
this->_awaited = _awaited;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_Awaiter::Awaitable_Awaiter()   {
}
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable_AwaitableHandle::*)()>(&::UnityEngine::Awaitable_AwaitableHandle::get_IsNull)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181649c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle.get_IsManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable_AwaitableHandle::*)()>(&::UnityEngine::Awaitable_AwaitableHandle::get_IsManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18226dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {"get_IsManaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_AwaitableHandle::*)(::System::IntPtr)>(&::UnityEngine::Awaitable_AwaitableHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableHandle.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Awaitable_AwaitableHandle)>(&::UnityEngine::Awaitable_AwaitableHandle::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaitableHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Awaitable_AwaitableHandle::setStaticF_ManagedHandle(::UnityEngine::Awaitable_AwaitableHandle  value)  {
::cordl_internals::setStaticField<::UnityEngine::Awaitable_AwaitableHandle, "ManagedHandle", ::UnityEngine::Awaitable_AwaitableHandle>(std::forward<::UnityEngine::Awaitable_AwaitableHandle>(value));
}
inline ::UnityEngine::Awaitable_AwaitableHandle UnityEngine::Awaitable_AwaitableHandle::getStaticF_ManagedHandle()  {
return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_AwaitableHandle, "ManagedHandle", ::UnityEngine::Awaitable_AwaitableHandle>();
}
inline void UnityEngine::Awaitable_AwaitableHandle::setStaticF_NullHandle(::UnityEngine::Awaitable_AwaitableHandle  value)  {
::cordl_internals::setStaticField<::UnityEngine::Awaitable_AwaitableHandle, "NullHandle", ::UnityEngine::Awaitable_AwaitableHandle>(std::forward<::UnityEngine::Awaitable_AwaitableHandle>(value));
}
inline ::UnityEngine::Awaitable_AwaitableHandle UnityEngine::Awaitable_AwaitableHandle::getStaticF_NullHandle()  {
return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_AwaitableHandle, "NullHandle", ::UnityEngine::Awaitable_AwaitableHandle>();
}
inline bool UnityEngine::Awaitable_AwaitableHandle::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Awaitable_AwaitableHandle::get_IsManaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {"get_IsManaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Awaitable_AwaitableHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::System::IntPtr UnityEngine::Awaitable_AwaitableHandle::op_Implicit___System__IntPtr(::UnityEngine::Awaitable_AwaitableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaitableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
// Ctor Parameters [CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaitableHandle::Awaitable_AwaitableHandle(::System::IntPtr  _handle) noexcept  {
this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaitableHandle::Awaitable_AwaitableHandle()   {
}
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableAndFrameIndex.get_Awaitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable* (::UnityEngine::Awaitable_AwaitableAndFrameIndex::*)()>(&::UnityEngine::Awaitable_AwaitableAndFrameIndex::get_Awaitable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_Awaitable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableAndFrameIndex.get_FrameIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Awaitable_AwaitableAndFrameIndex::*)()>(&::UnityEngine::Awaitable_AwaitableAndFrameIndex::get_FrameIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_FrameIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_AwaitableAndFrameIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_AwaitableAndFrameIndex::*)(::UnityEngine::Awaitable*, int32_t)>(&::UnityEngine::Awaitable_AwaitableAndFrameIndex::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f17c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable_AwaitableAndFrameIndex::get_Awaitable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_Awaitable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*>(*this, ___internal_method);
}
inline int32_t UnityEngine::Awaitable_AwaitableAndFrameIndex::get_FrameIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_FrameIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Awaitable_AwaitableAndFrameIndex::_ctor(::UnityEngine::Awaitable*  awaitable, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaitable, frameIndex);
}
// Ctor Parameters [CppParam { name: "_Awaitable_k__BackingField", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FrameIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Awaitable_AwaitableAndFrameIndex::Awaitable_AwaitableAndFrameIndex(::UnityEngine::Awaitable*  _Awaitable_k__BackingField, int32_t  _FrameIndex_k__BackingField) noexcept  {
this->_Awaitable_k__BackingField = _Awaitable_k__BackingField;
this->_FrameIndex_k__BackingField = _FrameIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_AwaitableAndFrameIndex::Awaitable_AwaitableAndFrameIndex()   {
}
//  Writing Method size for method: ::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::*)()>(&::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0._Remove_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::*)(::UnityEngine::Awaitable_AwaitableAndFrameIndex)>(&::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18227ad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*>(),
                        {"<Remove>b__0", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Awaitable*& UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::UnityEngine::Awaitable* const& UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::__cordl_internal_set_item(::UnityEngine::Awaitable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
inline void UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::_Remove_b__0(::UnityEngine::Awaitable_AwaitableAndFrameIndex  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*>(),
                        {"<Remove>b__0", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaitableAndFrameIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0* UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList.SwapAndComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)()>(&::UnityEngine::Awaitable_DoubleBufferedAwaitableList::SwapAndComplete)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18226ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"SwapAndComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)(::UnityEngine::Awaitable*, int32_t)>(&::UnityEngine::Awaitable_DoubleBufferedAwaitableList::Add)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18226fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)(::UnityEngine::Awaitable*)>(&::UnityEngine::Awaitable_DoubleBufferedAwaitableList::Remove)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18226ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::Awaitable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)()>(&::UnityEngine::Awaitable_DoubleBufferedAwaitableList::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fe77e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable_DoubleBufferedAwaitableList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable_DoubleBufferedAwaitableList::*)()>(&::UnityEngine::Awaitable_DoubleBufferedAwaitableList::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182270170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__awaitables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____awaitables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* const& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__awaitables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____awaitables;
}
constexpr void UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_set__awaitables(::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____awaitables = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__scratch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scratch;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* const& UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_get__scratch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scratch;
}
constexpr void UnityEngine::Awaitable_DoubleBufferedAwaitableList::__cordl_internal_set__scratch(::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scratch = value;
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::SwapAndComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"SwapAndComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::Add(::UnityEngine::Awaitable*  item, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, frameIndex);
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::Remove(::UnityEngine::Awaitable*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::Awaitable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Awaitable_DoubleBufferedAwaitableList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* UnityEngine::Awaitable_DoubleBufferedAwaitableList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList::Awaitable_DoubleBufferedAwaitableList()   {
}
//  Writing Method size for method: ::UnityEngine::Awaitable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable___c::*)()>(&::UnityEngine::Awaitable___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable___c._WireupCancellation_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable___c::*)(::System::Object*)>(&::UnityEngine::Awaitable___c::_WireupCancellation_b__26_0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18227a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {"<WireupCancellation>b__26_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable___c.__cctor_b__76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>* (::UnityEngine::Awaitable___c::*)()>(&::UnityEngine::Awaitable___c::__cctor_b__76_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18227ac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {"<.cctor>b__76_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable___c.__cctor_b__76_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable* (::UnityEngine::Awaitable___c::*)()>(&::UnityEngine::Awaitable___c::__cctor_b__76_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {"<.cctor>b__76_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Awaitable___c::setStaticF___9(::UnityEngine::Awaitable___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Awaitable___c*, "<>9", ::UnityEngine::Awaitable___c*>(std::forward<::UnityEngine::Awaitable___c*>(value));
}
inline ::UnityEngine::Awaitable___c* UnityEngine::Awaitable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Awaitable___c*, "<>9", ::UnityEngine::Awaitable___c*>();
}
inline void UnityEngine::Awaitable___c::setStaticF___9__26_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__26_0", ::UnityEngine::Awaitable___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* UnityEngine::Awaitable___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__26_0", ::UnityEngine::Awaitable___c*>();
}
inline void UnityEngine::Awaitable___c::setStaticF___9__76_1(::System::Func_1<::UnityEngine::Awaitable*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Awaitable*>*, "<>9__76_1", ::UnityEngine::Awaitable___c*>(std::forward<::System::Func_1<::UnityEngine::Awaitable*>*>(value));
}
inline ::System::Func_1<::UnityEngine::Awaitable*>* UnityEngine::Awaitable___c::getStaticF___9__76_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Awaitable*>*, "<>9__76_1", ::UnityEngine::Awaitable___c*>();
}
inline void UnityEngine::Awaitable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Awaitable___c::_WireupCancellation_b__26_0(::System::Object*  coroutine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {"<WireupCancellation>b__26_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutine);
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>* UnityEngine::Awaitable___c::__cctor_b__76_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {"<.cctor>b__76_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable___c::__cctor_b__76_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable___c*>(),
                        {"<.cctor>b__76_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable___c* UnityEngine::Awaitable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Awaitable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable___c::Awaitable___c()   {
}
//  Writing Method size for method: ::UnityEngine::Awaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable_Awaiter (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x3780;
  constexpr static std::size_t addrs = 0x180e3aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.SetExceptionFromNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)(::System::Exception*)>(&::UnityEngine::Awaitable::SetExceptionFromNative)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18226ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"SetExceptionFromNative", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RunContinuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::RunContinuation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18226eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RunContinuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.ReleaseNativeAwaitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Awaitable::ReleaseNativeAwaitable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18226eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"ReleaseNativeAwaitable", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.CancelNativeAwaitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Awaitable::CancelNativeAwaitable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18226dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"CancelNativeAwaitable", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.IsNativeAwaitableCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Awaitable::IsNativeAwaitableCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18226e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"IsNativeAwaitableCompleted", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18226f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.NewManagedAwaitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable* (*)()>(&::UnityEngine::Awaitable::NewManagedAwaitable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18226e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"NewManagedAwaitable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.WireupCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Awaitable*, ::System::Threading::CancellationToken)>(&::UnityEngine::Awaitable::WireupCancellation)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18226f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"WireupCancellation", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.MatchCompletionThreadAffinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity)>(&::UnityEngine::Awaitable::MatchCompletionThreadAffinity)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18226ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"MatchCompletionThreadAffinity", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RaiseManagedCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)(::System::Exception*)>(&::UnityEngine::Awaitable::RaiseManagedCompletion)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18226e970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RaiseManagedCompletion", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RunOrScheduleContinuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity, ::System::Action*)>(&::UnityEngine::Awaitable::RunOrScheduleContinuation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18226ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RunOrScheduleContinuation", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.DoRunContinuationOnSynchonizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Awaitable::DoRunContinuationOnSynchonizationContext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18226de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"DoRunContinuationOnSynchonizationContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.RaiseManagedCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::RaiseManagedCompletion)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18226e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RaiseManagedCompletion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.PropagateExceptionAndRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::PropagateExceptionAndRelease)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18226e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"PropagateExceptionAndRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::Cancel)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18226dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsCompletedNoLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsCompletedNoLock)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18226f420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsCompletedNoLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsLogicallyCompletedNoLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsLogicallyCompletedNoLock)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18226f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsLogicallyCompletedNoLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsCompleted)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18226f4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.get_IsDettachedOrCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::get_IsDettachedOrCompleted)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18226f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsDettachedOrCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.CheckPointerValidity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable_AwaitableHandle (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::CheckPointerValidity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18226de40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"CheckPointerValidity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.SetContinuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)(::System::Action*)>(&::UnityEngine::Awaitable::SetContinuation)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18226ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"SetContinuation", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18226ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Awaitable::*)()>(&::UnityEngine::Awaitable::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.ThrowIfNotMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Awaitable::ThrowIfNotMainThread)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18226efb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"ThrowIfNotMainThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.EndOfFrameAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable* (*)(::System::Threading::CancellationToken)>(&::UnityEngine::Awaitable::EndOfFrameAsync)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18226dea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"EndOfFrameAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.EnsureDelayedCallWiredUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Awaitable::EnsureDelayedCallWiredUp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18226e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"EnsureDelayedCallWiredUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.OnDelayedCallManagerCleared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Awaitable::OnDelayedCallManagerCleared)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18226e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"OnDelayedCallManagerCleared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Awaitable::OnUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18226e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"OnUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.OnEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Awaitable::OnEndOfFrame)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18226e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"OnEndOfFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.WireupNextFrameAndEndOfFrameCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Awaitable::WireupNextFrameAndEndOfFrameCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18226f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"WireupNextFrameAndEndOfFrameCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Awaitable.SetSynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UnitySynchronizationContext*)>(&::UnityEngine::Awaitable::SetSynchronizationContext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18226ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"SetSynchronizationContext", {}, {::i2c::type_of<::UnityEngine::UnitySynchronizationContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SpinLock& UnityEngine::Awaitable::__cordl_internal_get__spinLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spinLock;
}
constexpr ::System::Threading::SpinLock const& UnityEngine::Awaitable::__cordl_internal_get__spinLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spinLock;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__spinLock(::System::Threading::SpinLock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spinLock = value;
}
constexpr ::UnityEngine::Awaitable_AwaitableHandle& UnityEngine::Awaitable::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr ::UnityEngine::Awaitable_AwaitableHandle const& UnityEngine::Awaitable::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__handle(::UnityEngine::Awaitable_AwaitableHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& UnityEngine::Awaitable::__cordl_internal_get__exceptionToRethrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionToRethrow;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& UnityEngine::Awaitable::__cordl_internal_get__exceptionToRethrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionToRethrow;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__exceptionToRethrow(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exceptionToRethrow = value;
}
constexpr bool& UnityEngine::Awaitable::__cordl_internal_get__managedAwaitableDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____managedAwaitableDone;
}
constexpr bool const& UnityEngine::Awaitable::__cordl_internal_get__managedAwaitableDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____managedAwaitableDone;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__managedAwaitableDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____managedAwaitableDone = value;
}
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity& UnityEngine::Awaitable::__cordl_internal_get__completionThreadAffinity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completionThreadAffinity;
}
constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity const& UnityEngine::Awaitable::__cordl_internal_get__completionThreadAffinity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completionThreadAffinity;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__completionThreadAffinity(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____completionThreadAffinity = value;
}
constexpr ::System::Action*& UnityEngine::Awaitable::__cordl_internal_get__continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continuation;
}
constexpr ::System::Action* const& UnityEngine::Awaitable::__cordl_internal_get__continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continuation;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__continuation(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____continuation = value;
}
constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>& UnityEngine::Awaitable::__cordl_internal_get__cancelTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelTokenRegistration;
}
constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration> const& UnityEngine::Awaitable::__cordl_internal_get__cancelTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelTokenRegistration;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__cancelTokenRegistration(::System::Nullable_1<::System::Threading::CancellationTokenRegistration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancelTokenRegistration = value;
}
constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*& UnityEngine::Awaitable::__cordl_internal_get__managedCompletionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____managedCompletionQueue;
}
constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* const& UnityEngine::Awaitable::__cordl_internal_get__managedCompletionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____managedCompletionQueue;
}
constexpr void UnityEngine::Awaitable::__cordl_internal_set__managedCompletionQueue(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____managedCompletionQueue = value;
}
inline void UnityEngine::Awaitable::setStaticF__pool(::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*  value)  {
::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*, "_pool", ::UnityEngine::Awaitable*>(std::forward<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*>(value));
}
inline ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* UnityEngine::Awaitable::getStaticF__pool()  {
return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*, "_pool", ::UnityEngine::Awaitable*>();
}
inline void UnityEngine::Awaitable::setStaticF__nextFrameAndEndOfFrameWiredUp(bool  value)  {
::cordl_internals::setStaticField<bool, "_nextFrameAndEndOfFrameWiredUp", ::UnityEngine::Awaitable*>(std::forward<bool>(value));
}
inline bool UnityEngine::Awaitable::getStaticF__nextFrameAndEndOfFrameWiredUp()  {
return ::cordl_internals::getStaticField<bool, "_nextFrameAndEndOfFrameWiredUp", ::UnityEngine::Awaitable*>();
}
inline void UnityEngine::Awaitable::setStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration(::System::Threading::CancellationTokenRegistration  value)  {
::cordl_internals::setStaticField<::System::Threading::CancellationTokenRegistration, "_nextFrameAndEndOfFrameWiredUpCTRegistration", ::UnityEngine::Awaitable*>(std::forward<::System::Threading::CancellationTokenRegistration>(value));
}
inline ::System::Threading::CancellationTokenRegistration UnityEngine::Awaitable::getStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration()  {
return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenRegistration, "_nextFrameAndEndOfFrameWiredUpCTRegistration", ::UnityEngine::Awaitable*>();
}
inline void UnityEngine::Awaitable::setStaticF__nextFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_nextFrameAwaitables", ::UnityEngine::Awaitable*>(std::forward<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(value));
}
inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* UnityEngine::Awaitable::getStaticF__nextFrameAwaitables()  {
return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_nextFrameAwaitables", ::UnityEngine::Awaitable*>();
}
inline void UnityEngine::Awaitable::setStaticF__endOfFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_endOfFrameAwaitables", ::UnityEngine::Awaitable*>(std::forward<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*>(value));
}
inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* UnityEngine::Awaitable::getStaticF__endOfFrameAwaitables()  {
return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "_endOfFrameAwaitables", ::UnityEngine::Awaitable*>();
}
inline void UnityEngine::Awaitable::setStaticF__synchronizationContext(::System::Threading::SynchronizationContext*  value)  {
::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "_synchronizationContext", ::UnityEngine::Awaitable*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* UnityEngine::Awaitable::getStaticF__synchronizationContext()  {
return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "_synchronizationContext", ::UnityEngine::Awaitable*>();
}
inline void UnityEngine::Awaitable::setStaticF__mainThreadId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_mainThreadId", ::UnityEngine::Awaitable*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Awaitable::getStaticF__mainThreadId()  {
return ::cordl_internals::getStaticField<int32_t, "_mainThreadId", ::UnityEngine::Awaitable*>();
}
inline ::UnityEngine::Awaitable_Awaiter UnityEngine::Awaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_Awaiter>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::SetExceptionFromNative(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"SetExceptionFromNative", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
inline void UnityEngine::Awaitable::RunContinuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RunContinuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::ReleaseNativeAwaitable(::System::IntPtr  nativeAwaitable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"ReleaseNativeAwaitable", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeAwaitable);
}
inline void UnityEngine::Awaitable::CancelNativeAwaitable(::System::IntPtr  nativeAwaitable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"CancelNativeAwaitable", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeAwaitable);
}
inline int32_t UnityEngine::Awaitable::IsNativeAwaitableCompleted(::System::IntPtr  nativeAwaitable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"IsNativeAwaitableCompleted", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nativeAwaitable);
}
inline void UnityEngine::Awaitable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable::NewManagedAwaitable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"NewManagedAwaitable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::WireupCancellation(::UnityEngine::Awaitable*  awaitable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"WireupCancellation", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, awaitable, cancellationToken);
}
inline bool UnityEngine::Awaitable::MatchCompletionThreadAffinity(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity  awaiterCompletionThreadAffinity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"MatchCompletionThreadAffinity", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, awaiterCompletionThreadAffinity);
}
inline void UnityEngine::Awaitable::RaiseManagedCompletion(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RaiseManagedCompletion", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void UnityEngine::Awaitable::RunOrScheduleContinuation(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity  awaiterCompletionThreadAffinity, ::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RunOrScheduleContinuation", {}, {::i2c::type_of<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, awaiterCompletionThreadAffinity, continuation);
}
inline void UnityEngine::Awaitable::DoRunContinuationOnSynchonizationContext(::System::Object*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"DoRunContinuationOnSynchonizationContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, continuation);
}
inline void UnityEngine::Awaitable::RaiseManagedCompletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"RaiseManagedCompletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::PropagateExceptionAndRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"PropagateExceptionAndRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsCompletedNoLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsCompletedNoLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsLogicallyCompletedNoLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsLogicallyCompletedNoLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Awaitable::get_IsDettachedOrCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"get_IsDettachedOrCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Awaitable_AwaitableHandle UnityEngine::Awaitable::CheckPointerValidity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"CheckPointerValidity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_AwaitableHandle>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::SetContinuation(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"SetContinuation", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation);
}
inline bool UnityEngine::Awaitable::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Awaitable::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Awaitable::ThrowIfNotMainThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"ThrowIfNotMainThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable::EndOfFrameAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"EndOfFrameAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*>(nullptr, ___internal_method, cancellationToken);
}
inline void UnityEngine::Awaitable::EnsureDelayedCallWiredUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"EnsureDelayedCallWiredUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::OnDelayedCallManagerCleared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"OnDelayedCallManagerCleared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"OnUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::OnEndOfFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"OnEndOfFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::WireupNextFrameAndEndOfFrameCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"WireupNextFrameAndEndOfFrameCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Awaitable::SetSynchronizationContext(::UnityEngine::UnitySynchronizationContext*  synchronizationContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Awaitable*>(),
                        {"SetSynchronizationContext", {}, {::i2c::type_of<::UnityEngine::UnitySynchronizationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, synchronizationContext);
}
inline ::UnityEngine::Awaitable* UnityEngine::Awaitable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Awaitable*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Awaitable::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Awaitable::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Awaitable::Awaitable()   {
}
