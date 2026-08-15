#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SingleConsumerUnboundedChannel_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__ChannelReader_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelWriter_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SingleConsumerUnboundedChannel_1)
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter;
}
namespace Cysharp::Threading::Tasks {
class UniTaskCompletionSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannel_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable, "Cysharp.Threading.Tasks", "SingleConsumerUnboundedChannel`1/SingleConsumerUnboundedChannelReader/ReadAllAsyncEnumerable");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1, "Cysharp.Threading.Tasks", "SingleConsumerUnboundedChannel`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader, "Cysharp.Threading.Tasks", "SingleConsumerUnboundedChannel`1/SingleConsumerUnboundedChannelReader");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter, "Cysharp.Threading.Tasks", "SingleConsumerUnboundedChannel`1/SingleConsumerUnboundedChannelWriter");
// Dependencies Cysharp.Threading.Tasks.ChannelWriter`1<T>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.SingleConsumerUnboundedChannel`1/SingleConsumerUnboundedChannelWriter<T>
class CORDL_TYPE SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter : public ::Cysharp::Threading::Tasks::ChannelWriter_1<T> {
public:
// Declarations
/// @brief Field parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent;

static inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>* New_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent) ;

/// @brief Method TryComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryComplete(::System::Exception*  error) ;

/// @brief Method TryWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryWrite(T  item) ;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter(SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter(SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14190};

/// @brief Field parent, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  ___parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.SingleConsumerUnboundedChannel`1/SingleConsumerUnboundedChannelReader/ReadAllAsyncEnumerable<T>
class CORDL_TYPE SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable : public ::System::Object {
public:
// Declarations
/// @brief Field CancellationCallback1Delegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CancellationCallback1Delegate, put=__cordl_internal_set_CancellationCallback1Delegate)) ::System::Action_1<::System::Object*>*  CancellationCallback1Delegate;

/// @brief Field CancellationCallback2Delegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CancellationCallback2Delegate, put=__cordl_internal_set_CancellationCallback2Delegate)) ::System::Action_1<::System::Object*>*  CancellationCallback2Delegate;

 __declspec(property(get=get_Current)) T  Current;

/// @brief Field cacheValue, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_cacheValue, put=__cordl_internal_set_cacheValue)) bool  cacheValue;

/// @brief Field cancellationToken1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken1, put=__cordl_internal_set_cancellationToken1)) ::System::Threading::CancellationToken  cancellationToken1;

/// @brief Field cancellationToken2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken2, put=__cordl_internal_set_cancellationToken2)) ::System::Threading::CancellationToken  cancellationToken2;

/// @brief Field cancellationTokenRegistration1, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration1, put=__cordl_internal_set_cancellationTokenRegistration1)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration1;

/// @brief Field cancellationTokenRegistration2, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration2, put=__cordl_internal_set_cancellationTokenRegistration2)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration2;

/// @brief Field current, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) T  current;

/// @brief Field parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  parent;

/// @brief Field running, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) bool  running;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method CancellationCallback1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback1(::System::Object*  state) ;

/// @brief Method CancellationCallback2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback2(::System::Object*  state) ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>* New_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_CancellationCallback1Delegate() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_CancellationCallback1Delegate() ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_CancellationCallback2Delegate() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_CancellationCallback2Delegate() ;

constexpr bool const& __cordl_internal_get_cacheValue() const;

constexpr bool& __cordl_internal_get_cacheValue() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken1() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken1() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken2() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken2() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration1() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration1() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration2() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration2() ;

constexpr T const& __cordl_internal_get_current() const;

constexpr T& __cordl_internal_get_current() ;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*& __cordl_internal_get_parent() ;

constexpr bool const& __cordl_internal_get_running() const;

constexpr bool& __cordl_internal_get_running() ;

constexpr void __cordl_internal_set_CancellationCallback1Delegate(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_CancellationCallback2Delegate(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_cacheValue(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationToken2(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration1(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration2(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_current(T  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  value) ;

constexpr void __cordl_internal_set_running(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable(SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable(SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14191};

/// @brief Field CancellationCallback1Delegate, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___CancellationCallback1Delegate;

/// @brief Field CancellationCallback2Delegate, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___CancellationCallback2Delegate;

/// @brief Field parent, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  ___parent;

/// @brief Field cancellationToken1, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken1;

/// @brief Field cancellationToken2, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken2;

/// @brief Field cancellationTokenRegistration1, offset: 0x38, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration1;

/// @brief Field cancellationTokenRegistration2, offset: 0x50, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration2;

/// @brief Field current, offset: 0x68, size: 0x8, def value: None
 T  ___current;

/// @brief Field cacheValue, offset: 0x70, size: 0x1, def value: None
 bool  ___cacheValue;

/// @brief Field running, offset: 0x71, size: 0x1, def value: None
 bool  ___running;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.ChannelReader`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.SingleConsumerUnboundedChannel`1/SingleConsumerUnboundedChannelReader<T>
class CORDL_TYPE SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader : public ::Cysharp::Threading::Tasks::ChannelReader_1<T> {
public:
// Declarations
using ReadAllAsyncEnumerable = ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannelReader_SingleConsumerUnboundedChannel_1_ReadAllAsyncEnumerable<T>;

/// @brief Field CancellationCallbackDelegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CancellationCallbackDelegate, put=__cordl_internal_set_CancellationCallbackDelegate)) ::System::Action_1<::System::Object*>*  CancellationCallbackDelegate;

 __declspec(property(get=get_Completion)) ::Cysharp::Threading::Tasks::UniTask  Completion;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field core, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  core;

/// @brief Field isWaiting, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isWaiting, put=__cordl_internal_set_isWaiting)) bool  isWaiting;

/// @brief Field parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept;

/// @brief Method CancellationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource<System.Boolean>.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Cysharp_Threading_Tasks_IUniTaskSource_System_Boolean__GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus() ;

static inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* New_ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent) ;

/// @brief Method ReadAllAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* ReadAllAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SingalCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SingalCancellation(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SingalCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SingalCompleted(::System::Exception*  error) ;

/// @brief Method SingalContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SingalContinuation() ;

/// @brief Method TryRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryRead(::by_ref<T>  item) ;

/// @brief Method WaitToReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> WaitToReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_CancellationCallbackDelegate() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_CancellationCallbackDelegate() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>& __cordl_internal_get_core() ;

constexpr bool const& __cordl_internal_get_isWaiting() const;

constexpr bool& __cordl_internal_get_isWaiting() ;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_CancellationCallbackDelegate(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  value) ;

constexpr void __cordl_internal_set_isWaiting(bool  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  parent) ;

/// @brief Method get_Completion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Completion() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_bool_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_bool_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader(SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader(SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14192};

/// @brief Field CancellationCallbackDelegate, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___CancellationCallbackDelegate;

/// @brief Field parent, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>*  ___parent;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x28, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field core, offset: 0x40, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<bool>  ___core;

/// @brief Field isWaiting, offset: 0x68, size: 0x1, def value: None
 bool  ___isWaiting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.Channel`1<T>, Cysharp.Threading.Tasks.UniTask
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.SingleConsumerUnboundedChannel`1<T>
class CORDL_TYPE SingleConsumerUnboundedChannel_1 : public ::Cysharp::Threading::Tasks::Channel_1<T> {
public:
// Declarations
using SingleConsumerUnboundedChannelReader = ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>;

using SingleConsumerUnboundedChannelWriter = ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelWriter<T>;

/// @brief Field closed, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_closed, put=__cordl_internal_set_closed)) bool  closed;

/// @brief Field completedTask, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_completedTask, put=__cordl_internal_set_completedTask)) ::Cysharp::Threading::Tasks::UniTask  completedTask;

/// @brief Field completedTaskSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_completedTaskSource, put=__cordl_internal_set_completedTaskSource)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  completedTaskSource;

/// @brief Field completionError, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionError, put=__cordl_internal_set_completionError)) ::System::Exception*  completionError;

/// @brief Field items, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::System::Collections::Generic::Queue_1<T>*  items;

/// @brief Field readerSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_readerSource, put=__cordl_internal_set_readerSource)) ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  readerSource;

static inline ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1<T>* New_ctor() ;

constexpr bool const& __cordl_internal_get_closed() const;

constexpr bool& __cordl_internal_get_closed() ;

constexpr ::Cysharp::Threading::Tasks::UniTask const& __cordl_internal_get_completedTask() const;

constexpr ::Cysharp::Threading::Tasks::UniTask& __cordl_internal_get_completedTask() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get_completedTaskSource() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get_completedTaskSource() ;

constexpr ::System::Exception* const& __cordl_internal_get_completionError() const;

constexpr ::System::Exception*& __cordl_internal_get_completionError() ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_items() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_items() ;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>* const& __cordl_internal_get_readerSource() const;

constexpr ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*& __cordl_internal_get_readerSource() ;

constexpr void __cordl_internal_set_closed(bool  value) ;

constexpr void __cordl_internal_set_completedTask(::Cysharp::Threading::Tasks::UniTask  value) ;

constexpr void __cordl_internal_set_completedTaskSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

constexpr void __cordl_internal_set_completionError(::System::Exception*  value) ;

constexpr void __cordl_internal_set_items(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set_readerSource(::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleConsumerUnboundedChannel_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleConsumerUnboundedChannel_1(SingleConsumerUnboundedChannel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleConsumerUnboundedChannel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleConsumerUnboundedChannel_1(SingleConsumerUnboundedChannel_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14193};

/// @brief Field items, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___items;

/// @brief Field readerSource, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader<T>*  ___readerSource;

/// @brief Field completedTaskSource, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ___completedTaskSource;

/// @brief Field completedTask, offset: 0x38, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  ___completedTask;

/// @brief Field completionError, offset: 0x48, size: 0x8, def value: None
 ::System::Exception*  ___completionError;

/// @brief Field closed, offset: 0x50, size: 0x1, def value: None
 bool  ___closed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
