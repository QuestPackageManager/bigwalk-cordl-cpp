#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTask_1)
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
struct UniTask_1_Awaiter;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_1_IsCanceledSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_1_MemoizeSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_1_IsCanceledSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_1_MemoizeSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1_Awaiter;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UniTask_1);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UniTask_1_Awaiter);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource, "Cysharp.Threading.Tasks", "UniTask`1/IsCanceledSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource, "Cysharp.Threading.Tasks", "UniTask`1/MemoizeSource");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UniTask_1, "Cysharp.Threading.Tasks", "UniTask`1");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UniTask_1_Awaiter, "Cysharp.Threading.Tasks", "UniTask`1/Awaiter");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask`1/IsCanceledSource<T>
class CORDL_TYPE UniTask_1_IsCanceledSource : public ::System::Object {
public:
// Declarations
/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<bool,T> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_2_bool_T__() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::System::ValueTuple_2<bool,T>>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___System__ValueTuple_2_bool_T__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_1_IsCanceledSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_1_IsCanceledSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_1_IsCanceledSource(UniTask_1_IsCanceledSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_1_IsCanceledSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_1_IsCanceledSource(UniTask_1_IsCanceledSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14431};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskStatus, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask`1/MemoizeSource<T>
class CORDL_TYPE UniTask_1_MemoizeSource : public ::System::Object {
public:
// Declarations
/// @brief Field exception, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Field result, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) T  result;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source;

/// @brief Field status, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::Cysharp::Threading::Tasks::UniTaskStatus  status;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr T const& __cordl_internal_get_result() const;

constexpr T& __cordl_internal_get_result() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*& __cordl_internal_get_source() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskStatus const& __cordl_internal_get_status() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskStatus& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set_result(T  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  value) ;

constexpr void __cordl_internal_set_status(::Cysharp::Threading::Tasks::UniTaskStatus  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_1_MemoizeSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_1_MemoizeSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_1_MemoizeSource(UniTask_1_MemoizeSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_1_MemoizeSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_1_MemoizeSource(UniTask_1_MemoizeSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14432};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  ___source;

/// @brief Field result, offset: 0x18, size: 0x8, def value: None
 T  ___result;

/// @brief Field exception, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

/// @brief Field status, offset: 0x28, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::UniTaskStatus  ___status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTask`1<T>
struct CORDL_TYPE UniTask_1 {
public:
// Declarations
using Awaiter = ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>;

using IsCanceledSource = ::Cysharp::Threading::Tasks::UniTask_1_IsCanceledSource<T>;

using MemoizeSource = ::Cysharp::Threading::Tasks::UniTask_1_MemoizeSource<T>;

 __declspec(property(get=get_Status)) ::Cysharp::Threading::Tasks::UniTaskStatus  Status;

/// @brief Method AsUniTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask AsUniTask() ;

/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> GetAwaiter() ;

/// @brief Method Preserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Preserve() ;

/// @brief Method SuppressCancellationThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,T>> SuppressCancellationThrow() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  result) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source, int16_t  token) ;

/// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus get_Status() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask op_Implicit___Cysharp__Threading__Tasks__UniTask(::Cysharp::Threading::Tasks::UniTask_1<T>  self) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::ValueTask_1<T> op_Implicit___System__Threading__Tasks__ValueTask_1_T_(::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  self) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTask_1() ;

// Ctor Parameters [CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "result", ty: "T", modifiers: "", def_value: None }, CppParam { name: "token", ty: "int16_t", modifiers: "", def_value: None }]
constexpr UniTask_1(::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source, T  result, int16_t  token) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*  source;

/// @brief Field result, offset: 0x8, size: 0x8, def value: None
 T  result;

/// @brief Field token, offset: 0x10, size: 0x2, def value: None
 int16_t  token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTask`1<T>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>
struct CORDL_TYPE UniTask_1_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetResult() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method SourceOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceOnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state) ;

/// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  task) ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTask_1_Awaiter() ;

// Ctor Parameters [CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None }]
constexpr UniTask_1_Awaiter(::Cysharp::Threading::Tasks::UniTask_1<T>  task) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field task, offset: 0x0, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
