#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AutoResetUniTaskCompletionSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoResetUniTaskCompletionSource)
namespace Cysharp::Threading::Tasks {
class AutoResetUniTaskCompletionSource___c;
}
namespace Cysharp::Threading::Tasks {
class ICancelPromise;
}
namespace Cysharp::Threading::Tasks {
class IPromise;
}
namespace Cysharp::Threading::Tasks {
class IRejectPromise;
}
namespace Cysharp::Threading::Tasks {
class IResolvePromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
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
class AutoResetUniTaskCompletionSource;
}
namespace Cysharp::Threading::Tasks {
class AutoResetUniTaskCompletionSource___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*, "Cysharp.Threading.Tasks", "AutoResetUniTaskCompletionSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*, "Cysharp.Threading.Tasks", "AutoResetUniTaskCompletionSource/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AutoResetUniTaskCompletionSource/<>c
class CORDL_TYPE AutoResetUniTaskCompletionSource___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*  __9;

static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x181e683e0, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoResetUniTaskCompletionSource___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoResetUniTaskCompletionSource___c(AutoResetUniTaskCompletionSource___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoResetUniTaskCompletionSource___c(AutoResetUniTaskCompletionSource___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AutoResetUniTaskCompletionSource
class CORDL_TYPE AutoResetUniTaskCompletionSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  NextNode;

 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>  pool;

/// @brief Field version, offset 0x40, size 0x2 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int16_t  version;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr operator  ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr operator  ::Cysharp::Threading::Tasks::IResolvePromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method Create, addr 0x181e5cac0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Create() ;

/// @brief Method CreateCompleted, addr 0x181e5c940, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* CreateCompleted(::by_ref<int16_t>  token) ;

/// @brief Method CreateFromCanceled, addr 0x181e5c9c0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* CreateFromCanceled(::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method CreateFromException, addr 0x181e5ca40, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* CreateFromException(::System::Exception*  exception, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0x181e5cb40, size 0xa0, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180ed0c90, size 0x1f0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180ed0e80, size 0x240, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e5cbe0, size 0x50, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method TrySetCanceled, addr 0x180ed10c0, size 0x100, virtual true, abstract: false, final true
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetException, addr 0x180ed11c0, size 0x230, virtual true, abstract: false, final true
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult, addr 0x181e5cc30, size 0x30, virtual true, abstract: false, final true
inline bool TrySetResult() ;

/// @brief Method UnsafeGetStatus, addr 0x180c3ef10, size 0x1020, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*& __cordl_internal_get_nextNode() ;

constexpr int16_t const& __cordl_internal_get_version() const;

constexpr int16_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  value) ;

constexpr void __cordl_internal_set_version(int16_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*> get_NextNode() ;

/// @brief Method get_Task, addr 0x181e5cd10, size 0x40, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* i___Cysharp__Threading__Tasks__ICancelPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise"
constexpr ::Cysharp::Threading::Tasks::IPromise* i___Cysharp__Threading__Tasks__IPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* i___Cysharp__Threading__Tasks__IRejectPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise* i___Cysharp__Threading__Tasks__IResolvePromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AutoResetUniTaskCompletionSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoResetUniTaskCompletionSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoResetUniTaskCompletionSource(AutoResetUniTaskCompletionSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetUniTaskCompletionSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoResetUniTaskCompletionSource(AutoResetUniTaskCompletionSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14445};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  ___nextNode;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

/// @brief Field version, offset: 0x40, size: 0x2, def value: None
 int16_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource, ___core) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource, ___version) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
