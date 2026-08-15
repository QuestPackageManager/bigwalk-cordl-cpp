#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskObservableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskObservableExtensions)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class AsyncSubject_1;
}
namespace Cysharp::Threading::Tasks::Internal {
class SingleAssignmentDisposable;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskCompletionSource_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_FirstValueToUniTaskObserver_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_ReturnObservable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_ThrowObservable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_ToUniTaskObserver_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTaskObservableExtensions__Fire_d__3_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskObservableExtensions__Fire_d__4;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
class IDisposable;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskObservableExtensions;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_FirstValueToUniTaskObserver_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_ReturnObservable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_ThrowObservable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskObservableExtensions_ToUniTaskObserver_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTaskObservableExtensions__Fire_d__3_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskObservableExtensions__Fire_d__4;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskObservableExtensions*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__3_1);
MARK_VAL_T(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskObservableExtensions*, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/FirstValueToUniTaskObserver`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/ReturnObservable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/ThrowObservable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/ToUniTaskObserver`1");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__3_1, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/<Fire>d__3`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/<Fire>d__4");
// Dependencies System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/ToUniTaskObserver`1<T>
class CORDL_TYPE UniTaskObservableExtensions_ToUniTaskObserver_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callback, put=setStaticF_callback)) ::System::Action_1<::System::Object*>*  callback;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field disposable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_disposable, put=__cordl_internal_set_disposable)) ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable;

/// @brief Field hasValue, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasValue, put=__cordl_internal_set_hasValue)) bool  hasValue;

/// @brief Field latestValue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestValue, put=__cordl_internal_set_latestValue)) T  latestValue;

/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise;

/// @brief Field registration, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration, put=__cordl_internal_set_registration)) ::System::Threading::CancellationTokenRegistration  registration;

/// @brief Convert operator to "::System::IObserver_1<T>"
constexpr operator  ::System::IObserver_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled(::System::Object*  state) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* const& __cordl_internal_get_disposable() const;

constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*& __cordl_internal_get_disposable() ;

constexpr bool const& __cordl_internal_get_hasValue() const;

constexpr bool& __cordl_internal_get_hasValue() ;

constexpr T const& __cordl_internal_get_latestValue() const;

constexpr T& __cordl_internal_get_latestValue() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* const& __cordl_internal_get_promise() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*& __cordl_internal_get_promise() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_disposable(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  value) ;

constexpr void __cordl_internal_set_hasValue(bool  value) ;

constexpr void __cordl_internal_set_latestValue(T  value) ;

constexpr void __cordl_internal_set_promise(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  value) ;

constexpr void __cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_callback() ;

/// @brief Convert to "::System::IObserver_1<T>"
constexpr ::System::IObserver_1<T>* i___System__IObserver_1_T_() noexcept;

static inline void setStaticF_callback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions_ToUniTaskObserver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_ToUniTaskObserver_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskObservableExtensions_ToUniTaskObserver_1(UniTaskObservableExtensions_ToUniTaskObserver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_ToUniTaskObserver_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskObservableExtensions_ToUniTaskObserver_1(UniTaskObservableExtensions_ToUniTaskObserver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14487};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  ___promise;

/// @brief Field disposable, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  ___disposable;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field registration, offset: 0x28, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration;

/// @brief Field hasValue, offset: 0x40, size: 0x1, def value: None
 bool  ___hasValue;

/// @brief Field latestValue, offset: 0x48, size: 0x8, def value: None
 T  ___latestValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1<T>
class CORDL_TYPE UniTaskObservableExtensions_FirstValueToUniTaskObserver_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callback, put=setStaticF_callback)) ::System::Action_1<::System::Object*>*  callback;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field disposable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_disposable, put=__cordl_internal_set_disposable)) ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable;

/// @brief Field hasValue, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasValue, put=__cordl_internal_set_hasValue)) bool  hasValue;

/// @brief Field promise, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_promise, put=__cordl_internal_set_promise)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise;

/// @brief Field registration, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration, put=__cordl_internal_set_registration)) ::System::Threading::CancellationTokenRegistration  registration;

/// @brief Convert operator to "::System::IObserver_1<T>"
constexpr operator  ::System::IObserver_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled(::System::Object*  state) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* const& __cordl_internal_get_disposable() const;

constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*& __cordl_internal_get_disposable() ;

constexpr bool const& __cordl_internal_get_hasValue() const;

constexpr bool& __cordl_internal_get_hasValue() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* const& __cordl_internal_get_promise() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*& __cordl_internal_get_promise() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_disposable(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  value) ;

constexpr void __cordl_internal_set_hasValue(bool  value) ;

constexpr void __cordl_internal_set_promise(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  value) ;

constexpr void __cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_callback() ;

/// @brief Convert to "::System::IObserver_1<T>"
constexpr ::System::IObserver_1<T>* i___System__IObserver_1_T_() noexcept;

static inline void setStaticF_callback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions_FirstValueToUniTaskObserver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_FirstValueToUniTaskObserver_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskObservableExtensions_FirstValueToUniTaskObserver_1(UniTaskObservableExtensions_FirstValueToUniTaskObserver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_FirstValueToUniTaskObserver_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskObservableExtensions_FirstValueToUniTaskObserver_1(UniTaskObservableExtensions_FirstValueToUniTaskObserver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14488};

/// @brief Field promise, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  ___promise;

/// @brief Field disposable, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  ___disposable;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field registration, offset: 0x28, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration;

/// @brief Field hasValue, offset: 0x40, size: 0x1, def value: None
 bool  ___hasValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/ReturnObservable`1<T>
class CORDL_TYPE UniTaskObservableExtensions_ReturnObservable_1 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

/// @brief Convert operator to "::System::IObservable_1<T>"
constexpr operator  ::System::IObservable_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>* New_ctor(T  value) ;

/// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<T>*  observer) ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value) ;

/// @brief Convert to "::System::IObservable_1<T>"
constexpr ::System::IObservable_1<T>* i___System__IObservable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions_ReturnObservable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_ReturnObservable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskObservableExtensions_ReturnObservable_1(UniTaskObservableExtensions_ReturnObservable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_ReturnObservable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskObservableExtensions_ReturnObservable_1(UniTaskObservableExtensions_ReturnObservable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14489};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 T  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/ThrowObservable`1<T>
class CORDL_TYPE UniTaskObservableExtensions_ThrowObservable_1 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::Exception*  value;

/// @brief Convert operator to "::System::IObservable_1<T>"
constexpr operator  ::System::IObservable_1<T>*() noexcept;

static inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>* New_ctor(::System::Exception*  value) ;

/// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<T>*  observer) ;

constexpr ::System::Exception* const& __cordl_internal_get_value() const;

constexpr ::System::Exception*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  value) ;

/// @brief Convert to "::System::IObservable_1<T>"
constexpr ::System::IObservable_1<T>* i___System__IObservable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions_ThrowObservable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_ThrowObservable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskObservableExtensions_ThrowObservable_1(UniTaskObservableExtensions_ThrowObservable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions_ThrowObservable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskObservableExtensions_ThrowObservable_1(UniTaskObservableExtensions_ThrowObservable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14490};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__3`1<T>
struct CORDL_TYPE UniTaskObservableExtensions__Fire_d__3_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions__Fire_d__3_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>", modifiers: "", def_value: None }]
constexpr UniTaskObservableExtensions__Fire_d__3_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  subject, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Field subject, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  subject;

/// @brief Field <>u__1, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__4
struct CORDL_TYPE UniTaskObservableExtensions__Fire_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e81b20, size 0x360, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions__Fire_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr UniTaskObservableExtensions__Fire_d__4(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*  subject, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field subject, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*  subject;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4, task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4, subject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions
class CORDL_TYPE UniTaskObservableExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using FirstValueToUniTaskObserver_1 = ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>;

template<typename T>
using ReturnObservable_1 = ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>;

template<typename T>
using ThrowObservable_1 = ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>;

template<typename T>
using ToUniTaskObserver_1 = ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>;

template<typename T>
using _Fire_d__3_1 = ::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__3_1<T>;

using _Fire_d__4 = ::Cysharp::Threading::Tasks::UniTaskObservableExtensions__Fire_d__4;

/// @brief Method Fire, addr 0x181e83750, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid Fire(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*  subject, ::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method Fire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid Fire(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  subject, ::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// @brief Method ToObservable, addr 0x181e837e0, size 0x200, virtual false, abstract: false, final false
static inline ::System::IObservable_1<::Cysharp::Threading::Tasks::AsyncUnit>* ToObservable(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method ToObservable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IObservable_1<T>* ToObservable(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// @brief Method ToUniTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> ToUniTask(::System::IObservable_1<T>*  source, bool  useFirstValue, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskObservableExtensions(UniTaskObservableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskObservableExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskObservableExtensions(UniTaskObservableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskObservableExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
