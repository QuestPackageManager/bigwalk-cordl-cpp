#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskCompletionSource_1)
namespace Cysharp::Threading::Tasks {
class ExceptionHolder;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskCompletionSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1, "Cysharp.Threading.Tasks", "UniTaskCompletionSource`1");
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskCompletionSource`1<T>
class CORDL_TYPE UniTaskCompletionSource_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field exception, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::Cysharp::Threading::Tasks::ExceptionHolder*  exception;

/// @brief Field gate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Object*  gate;

/// @brief Field handled, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_handled, put=__cordl_internal_set_handled)) bool  handled;

/// @brief Field intStatus, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_intStatus, put=__cordl_internal_set_intStatus)) int32_t  intStatus;

/// @brief Field result, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) T  result;

/// @brief Field secondaryContinuationList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondaryContinuationList, put=__cordl_internal_set_secondaryContinuationList)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  secondaryContinuationList;

/// @brief Field singleContinuation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleContinuation, put=__cordl_internal_set_singleContinuation)) ::System::Action_1<::System::Object*>*  singleContinuation;

/// @brief Field singleState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleState, put=__cordl_internal_set_singleState)) ::System::Object*  singleState;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr operator  ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IPromise_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IResolvePromise_1<T>*() noexcept;

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

/// @brief Method MarkHandled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MarkHandled() ;

static inline ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TrySetResult(T  result) ;

/// @brief Method TrySignalCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus  status) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::ExceptionHolder* const& __cordl_internal_get_exception() const;

constexpr ::Cysharp::Threading::Tasks::ExceptionHolder*& __cordl_internal_get_exception() ;

constexpr ::System::Object* const& __cordl_internal_get_gate() const;

constexpr ::System::Object*& __cordl_internal_get_gate() ;

constexpr bool const& __cordl_internal_get_handled() const;

constexpr bool& __cordl_internal_get_handled() ;

constexpr int32_t const& __cordl_internal_get_intStatus() const;

constexpr int32_t& __cordl_internal_get_intStatus() ;

constexpr T const& __cordl_internal_get_result() const;

constexpr T& __cordl_internal_get_result() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>* const& __cordl_internal_get_secondaryContinuationList() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*& __cordl_internal_get_secondaryContinuationList() ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_singleContinuation() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_singleContinuation() ;

constexpr ::System::Object* const& __cordl_internal_get_singleState() const;

constexpr ::System::Object*& __cordl_internal_get_singleState() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_exception(::Cysharp::Threading::Tasks::ExceptionHolder*  value) ;

constexpr void __cordl_internal_set_gate(::System::Object*  value) ;

constexpr void __cordl_internal_set_handled(bool  value) ;

constexpr void __cordl_internal_set_intStatus(int32_t  value) ;

constexpr void __cordl_internal_set_result(T  value) ;

constexpr void __cordl_internal_set_secondaryContinuationList(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  value) ;

constexpr void __cordl_internal_set_singleContinuation(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_singleState(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

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
constexpr UniTaskCompletionSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskCompletionSource_1(UniTaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskCompletionSource_1(UniTaskCompletionSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14449};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field result, offset: 0x18, size: 0x8, def value: None
 T  ___result;

/// @brief Field exception, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ExceptionHolder*  ___exception;

/// @brief Field gate, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___gate;

/// @brief Field singleContinuation, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___singleContinuation;

/// @brief Field singleState, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___singleState;

/// @brief Field secondaryContinuationList, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  ___secondaryContinuationList;

/// @brief Field intStatus, offset: 0x48, size: 0x4, def value: None
 int32_t  ___intStatus;

/// @brief Field handled, offset: 0x4c, size: 0x1, def value: None
 bool  ___handled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
