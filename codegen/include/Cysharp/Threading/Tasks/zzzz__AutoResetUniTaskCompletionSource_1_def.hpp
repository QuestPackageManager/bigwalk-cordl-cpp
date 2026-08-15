#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AutoResetUniTaskCompletionSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoResetUniTaskCompletionSource_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AutoResetUniTaskCompletionSource_1___c;
}
namespace Cysharp::Threading::Tasks {
class ICancelPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IPromise_1;
}
namespace Cysharp::Threading::Tasks {
class IRejectPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IResolvePromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
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
class AutoResetUniTaskCompletionSource_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AutoResetUniTaskCompletionSource_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1, "Cysharp.Threading.Tasks", "AutoResetUniTaskCompletionSource`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c, "Cysharp.Threading.Tasks", "AutoResetUniTaskCompletionSource`1/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AutoResetUniTaskCompletionSource`1/<>c<T>
class CORDL_TYPE AutoResetUniTaskCompletionSource_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*  __9;

static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoResetUniTaskCompletionSource_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoResetUniTaskCompletionSource_1___c(AutoResetUniTaskCompletionSource_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoResetUniTaskCompletionSource_1___c(AutoResetUniTaskCompletionSource_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14446};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AutoResetUniTaskCompletionSource`1<T>
class CORDL_TYPE AutoResetUniTaskCompletionSource_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1___c<T>;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*  NextNode;

 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>  pool;

/// @brief Field version, offset 0x40, size 0x2 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int16_t  version;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr operator  ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IPromise_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IResolvePromise_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* Create() ;

/// @brief Method CreateFromCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* CreateFromCanceled(::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method CreateFromException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* CreateFromException(::System::Exception*  exception, ::by_ref<int16_t>  token) ;

/// @brief Method CreateFromResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* CreateFromResult(T  result, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TrySetResult(T  result) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*& __cordl_internal_get_nextNode() ;

constexpr int16_t const& __cordl_internal_get_version() const;

constexpr int16_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*  value) ;

constexpr void __cordl_internal_set_version(int16_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*> get_NextNode() ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* i___Cysharp__Threading__Tasks__ICancelPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise_1<T>"
constexpr ::Cysharp::Threading::Tasks::IPromise_1<T>* i___Cysharp__Threading__Tasks__IPromise_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* i___Cysharp__Threading__Tasks__IRejectPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise_1<T>* i___Cysharp__Threading__Tasks__IResolvePromise_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AutoResetUniTaskCompletionSource_1_T___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoResetUniTaskCompletionSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoResetUniTaskCompletionSource_1(AutoResetUniTaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoResetUniTaskCompletionSource_1(AutoResetUniTaskCompletionSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14447};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<T>*  ___nextNode;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

/// @brief Field version, offset: 0x40, size: 0x2, def value: None
 int16_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
