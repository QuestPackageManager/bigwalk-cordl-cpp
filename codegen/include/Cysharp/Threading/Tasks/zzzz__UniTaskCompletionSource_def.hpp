#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCompletionSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskCompletionSource)
namespace Cysharp::Threading::Tasks {
class ExceptionHolder;
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
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class UniTaskCompletionSource;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskCompletionSource*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskCompletionSource*, "Cysharp.Threading.Tasks", "UniTaskCompletionSource");
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskCompletionSource
class CORDL_TYPE UniTaskCompletionSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field exception, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::Cysharp::Threading::Tasks::ExceptionHolder*  exception;

/// @brief Field gate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Object*  gate;

/// @brief Field handled, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_handled, put=__cordl_internal_set_handled)) bool  handled;

/// @brief Field intStatus, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_intStatus, put=__cordl_internal_set_intStatus)) int32_t  intStatus;

/// @brief Field secondaryContinuationList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondaryContinuationList, put=__cordl_internal_set_secondaryContinuationList)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  secondaryContinuationList;

/// @brief Field singleContinuation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleContinuation, put=__cordl_internal_set_singleContinuation)) ::System::Action_1<::System::Object*>*  singleContinuation;

/// @brief Field singleState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleState, put=__cordl_internal_set_singleState)) ::System::Object*  singleState;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr operator  ::Cysharp::Threading::Tasks::ICancelPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr operator  ::Cysharp::Threading::Tasks::IRejectPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr operator  ::Cysharp::Threading::Tasks::IResolvePromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method GetResult, addr 0x181e69740, size 0xd0, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x1803eb0e0, size 0x10, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MarkHandled, addr 0x181e69810, size 0x10, virtual false, abstract: false, final false
inline void MarkHandled() ;

static inline ::Cysharp::Threading::Tasks::UniTaskCompletionSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x181e69820, size 0x240, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TrySetCanceled, addr 0x181e69a60, size 0x40, virtual true, abstract: false, final true
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetException, addr 0x181e69aa0, size 0x100, virtual true, abstract: false, final true
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult, addr 0x181e69ba0, size 0x10, virtual true, abstract: false, final true
inline bool TrySetResult() ;

/// @brief Method TrySignalCompletion, addr 0x181e69bb0, size 0x240, virtual false, abstract: false, final false
inline bool TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus  status) ;

/// @brief Method UnsafeGetStatus, addr 0x1803eb0e0, size 0x10, virtual true, abstract: false, final true
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

constexpr void __cordl_internal_set_secondaryContinuationList(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  value) ;

constexpr void __cordl_internal_set_singleContinuation(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_singleState(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Task, addr 0x181e69df0, size 0x30, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ICancelPromise"
constexpr ::Cysharp::Threading::Tasks::ICancelPromise* i___Cysharp__Threading__Tasks__ICancelPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPromise"
constexpr ::Cysharp::Threading::Tasks::IPromise* i___Cysharp__Threading__Tasks__IPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IRejectPromise"
constexpr ::Cysharp::Threading::Tasks::IRejectPromise* i___Cysharp__Threading__Tasks__IRejectPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IResolvePromise"
constexpr ::Cysharp::Threading::Tasks::IResolvePromise* i___Cysharp__Threading__Tasks__IResolvePromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskCompletionSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCompletionSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskCompletionSource(UniTaskCompletionSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskCompletionSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskCompletionSource(UniTaskCompletionSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14448};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field exception, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ExceptionHolder*  ___exception;

/// @brief Field gate, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___gate;

/// @brief Field singleContinuation, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___singleContinuation;

/// @brief Field singleState, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___singleState;

/// @brief Field secondaryContinuationList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*,::System::Object*>>*  ___secondaryContinuationList;

/// @brief Field intStatus, offset: 0x40, size: 0x4, def value: None
 int32_t  ___intStatus;

/// @brief Field handled, offset: 0x44, size: 0x1, def value: None
 bool  ___handled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___exception) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___gate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___singleContinuation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___singleState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___secondaryContinuationList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___intStatus) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskCompletionSource, ___handled) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskCompletionSource) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
