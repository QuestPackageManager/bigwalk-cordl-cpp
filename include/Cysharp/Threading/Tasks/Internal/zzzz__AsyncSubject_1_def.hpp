#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/AsyncSubject_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncSubject_1)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class AsyncSubject_1_Subscription;
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
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class AsyncSubject_1;
}
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class AsyncSubject_1_Subscription;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1, "Cysharp.Threading.Tasks.Internal", "AsyncSubject`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription, "Cysharp.Threading.Tasks.Internal", "AsyncSubject`1/Subscription");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.AsyncSubject`1/Subscription<T>
class CORDL_TYPE AsyncSubject_1_Subscription : public ::System::Object {
public:
// Declarations
/// @brief Field gate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Object*  gate;

/// @brief Field parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  parent;

/// @brief Field unsubscribeTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unsubscribeTarget, put=__cordl_internal_set_unsubscribeTarget)) ::System::IObserver_1<T>*  unsubscribeTarget;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>* New_ctor(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  parent, ::System::IObserver_1<T>*  unsubscribeTarget) ;

constexpr ::System::Object* const& __cordl_internal_get_gate() const;

constexpr ::System::Object*& __cordl_internal_get_gate() ;

constexpr ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*& __cordl_internal_get_parent() ;

constexpr ::System::IObserver_1<T>* const& __cordl_internal_get_unsubscribeTarget() const;

constexpr ::System::IObserver_1<T>*& __cordl_internal_get_unsubscribeTarget() ;

constexpr void __cordl_internal_set_gate(::System::Object*  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  value) ;

constexpr void __cordl_internal_set_unsubscribeTarget(::System::IObserver_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  parent, ::System::IObserver_1<T>*  unsubscribeTarget) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncSubject_1_Subscription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncSubject_1_Subscription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncSubject_1_Subscription(AsyncSubject_1_Subscription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncSubject_1_Subscription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncSubject_1_Subscription(AsyncSubject_1_Subscription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14752};

/// @brief Field gate, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___gate;

/// @brief Field parent, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  ___parent;

/// @brief Field unsubscribeTarget, offset: 0x20, size: 0x8, def value: None
 ::System::IObserver_1<T>*  ___unsubscribeTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.AsyncSubject`1<T>
class CORDL_TYPE AsyncSubject_1 : public ::System::Object {
public:
// Declarations
using Subscription = ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1_Subscription<T>;

 __declspec(property(get=get_HasObservers)) bool  HasObservers;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_Value)) T  Value;

/// @brief Field hasValue, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasValue, put=__cordl_internal_set_hasValue)) bool  hasValue;

/// @brief Field isDisposed, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field isStopped, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStopped, put=__cordl_internal_set_isStopped)) bool  isStopped;

/// @brief Field lastError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastError, put=__cordl_internal_set_lastError)) ::System::Exception*  lastError;

/// @brief Field lastValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastValue, put=__cordl_internal_set_lastValue)) T  lastValue;

/// @brief Field observerLock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_observerLock, put=__cordl_internal_set_observerLock)) ::System::Object*  observerLock;

/// @brief Field outObserver, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_outObserver, put=__cordl_internal_set_outObserver)) ::System::IObserver_1<T>*  outObserver;

/// @brief Convert operator to "::System::IObservable_1<T>"
constexpr operator  ::System::IObservable_1<T>*() noexcept;

/// @brief Convert operator to "::System::IObserver_1<T>"
constexpr operator  ::System::IObserver_1<T>*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

/// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<T>*  observer) ;

/// @brief Method ThrowIfDisposed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

constexpr bool const& __cordl_internal_get_hasValue() const;

constexpr bool& __cordl_internal_get_hasValue() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr bool const& __cordl_internal_get_isStopped() const;

constexpr bool& __cordl_internal_get_isStopped() ;

constexpr ::System::Exception* const& __cordl_internal_get_lastError() const;

constexpr ::System::Exception*& __cordl_internal_get_lastError() ;

constexpr T const& __cordl_internal_get_lastValue() const;

constexpr T& __cordl_internal_get_lastValue() ;

constexpr ::System::Object* const& __cordl_internal_get_observerLock() const;

constexpr ::System::Object*& __cordl_internal_get_observerLock() ;

constexpr ::System::IObserver_1<T>* const& __cordl_internal_get_outObserver() const;

constexpr ::System::IObserver_1<T>*& __cordl_internal_get_outObserver() ;

constexpr void __cordl_internal_set_hasValue(bool  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_isStopped(bool  value) ;

constexpr void __cordl_internal_set_lastError(::System::Exception*  value) ;

constexpr void __cordl_internal_set_lastValue(T  value) ;

constexpr void __cordl_internal_set_observerLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_outObserver(::System::IObserver_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasObservers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasObservers() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// @brief Convert to "::System::IObservable_1<T>"
constexpr ::System::IObservable_1<T>* i___System__IObservable_1_T_() noexcept;

/// @brief Convert to "::System::IObserver_1<T>"
constexpr ::System::IObserver_1<T>* i___System__IObserver_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncSubject_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncSubject_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncSubject_1(AsyncSubject_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncSubject_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncSubject_1(AsyncSubject_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14753};

/// @brief Field observerLock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___observerLock;

/// @brief Field lastValue, offset: 0x18, size: 0x8, def value: None
 T  ___lastValue;

/// @brief Field hasValue, offset: 0x20, size: 0x1, def value: None
 bool  ___hasValue;

/// @brief Field isStopped, offset: 0x21, size: 0x1, def value: None
 bool  ___isStopped;

/// @brief Field isDisposed, offset: 0x22, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field lastError, offset: 0x28, size: 0x8, def value: None
 ::System::Exception*  ___lastError;

/// @brief Field outObserver, offset: 0x30, size: 0x8, def value: None
 ::System::IObserver_1<T>*  ___outObserver;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
